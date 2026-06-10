# Cómo (re)compilar el firmware — IF Corne 2.4g REC

Este repo es el firmware del **receptor/dongle USB** del IF Corne (no de las
mitades del teclado). Es un teclado QMK + Vial sobre un **STM32F103**. El
receptor no escanea teclas: pide el estado de la matriz por UART (1 Mbaud) al
módulo inalámbrico y lo procesa con QMK. El antirrebote se aplica aquí por
software (`DEBOUNCE 5` + `debounce()` en `matrix.c`).

El resultado del build es un archivo `.uf2` que se flashea copiándolo al disco
`IFKB` que aparece al poner el receptor en modo bootloader.

---

## Requisitos

- **Docker** corriendo (Docker Desktop o Rancher Desktop). Es la vía recomendada:
  la imagen oficial de QMK ya trae el toolchain ARM, así evitas instalar
  `arm-none-eabi-gcc` en macOS.
- **git**

> Por qué Docker y no `brew install qmk`: en macOS reciente el toolchain ARM
> (`osx-cross/arm`) choca con la política *tap-trust* de Homebrew y/o compila gcc
> desde fuente. Docker lo resuelve de una.

---

## Pasos

### 1. Clonar vial-qmk (fork de QMK con soporte Vial)

Se usa **vial-qmk** (no el QMK estándar) porque el keymap usa `VIAL_ENABLE` y
`QMK_SETTINGS`.

```bash
git clone --depth 1 https://github.com/vial-kb/vial-qmk.git
cd vial-qmk
git submodule update --init --recursive   # ChibiOS, etc. (pesado, varios cientos de MB)
```

### 2. Colocar este keyboard dentro de vial-qmk

```bash
# desde la carpeta de este repo (if_corne_firmware):
rsync -a --exclude='.git' --exclude='*.uf2' ./ /ruta/a/vial-qmk/keyboards/if_corne/
```

El keyboard queda en `vial-qmk/keyboards/if_corne` y el target de build es
`if_corne:vial`.

### 3. Parche de compatibilidad Python (solo con la imagen `qmk_cli:latest`)

La imagen `qmkfm/qmk_cli:latest` trae **Python 3.14**, y el tooling de vial-qmk
usa `ast.Num`, removido en Python 3.12+. Aplica este parche en el árbol de
vial-qmk:

```bash
# vial-qmk/lib/python/qmk/math.py
#   -    if isinstance(node, ast.Num):  # <number>
#   -        return node.n
#   +    if isinstance(node, ast.Constant):  # py3.12+
#   +        return node.value
sed -i '' \
  -e 's/if isinstance(node, ast.Num):.*/if isinstance(node, ast.Constant):/' \
  -e 's/return node.n$/return node.value/' \
  lib/python/qmk/math.py
```

> Si usás una imagen `qmk_cli` más antigua (Python ≤ 3.11) este parche no hace falta.

### 4. Compilar

```bash
cd /ruta/a/vial-qmk
docker run --rm -v "$PWD":/qmk_firmware -w /qmk_firmware qmkfm/qmk_cli \
  qmk compile -kb if_corne -km vial
```

Salida esperada:

```
Creating UF2 file for deployment: .build/if_corne_vial.uf2   [OK]
Copying if_corne_vial.uf2 to qmk_firmware folder             [OK]
```

El `.uf2` queda en `vial-qmk/if_corne_vial.uf2` (y en `vial-qmk/.build/`).

### 5. Flashear

1. Poné el **receptor** en modo bootloader (tecla Reset/Bootloader definida en
   Vial, en *Quantum → Reset*, o el botón físico).
2. Aparece un disco llamado **`IFKB`**.
3. Copiá `if_corne_vial.uf2` a ese disco. El receptor se reprograma y reinicia solo.
4. Tras actualizar firmware puede convenir limpiar settings con el keycode `CLR_EE`.

---

## Notas sobre el `info.json`

Este repo ya trae el `info.json` en **formato matriz moderno** (cada tecla tiene
`"matrix": [fila, col]`), requerido por el QMK actual. Las 253 coordenadas se
derivaron del mapeo de la macro `LAYOUT()` en `if_rec.h`. Si compilás contra una
versión vieja de vial-qmk (la de la época original del firmware del vendor), ese
campo es opcional pero no molesta.

## Ajustar el debounce

- Tiempo: `config.h` → `#define DEBOUNCE 5` (milisegundos).
- Lógica: `matrix.c` aplica `debounce()` sobre la matriz reensamblada desde UART
  en cada `matrix_scan()`. El algoritmo es el default de QMK (`sym_defer_g`).
- Nota: el debounce **no** es configurable desde Vial (es compile-time); hay que
  recompilar el `.uf2`.

## Toolchain nativo (alternativa sin Docker)

Si preferís no usar Docker:

```bash
brew install --cask gcc-arm-embedded   # toolchain ARM oficial precompilado
python3 -m pip install --user qmk       # CLI de QMK
# luego: qmk compile -kb if_corne -km vial  (con QMK_HOME apuntando a vial-qmk)
```
