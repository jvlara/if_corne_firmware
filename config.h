/* Copyright 2017 Mattia Dal Ben
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


#undef UART_DRIVER
#define UART_DRIVER SD2

/* key matrix size */
#define MATRIX_ROWS 20
#define MATRIX_COLS 16

#define ONESHOT_TIMEOUT 500

/* Software debounce en el receptor.
 * Las mitades inalambricas envian el estado crudo de la matriz por UART;
 * aqui filtramos rebotes/chatter sobre la matriz ya reensamblada.
 * QMK aplica este valor (ms) a traves del algoritmo de debounce por defecto
 * (sym_defer_g) solo porque matrix.c ahora llama a debounce(). */
#define DEBOUNCE 5

#define USB_POLLING_INTERVAL_MS 1

#define MIDI_ADVANCED

#define DIODE_DIRECTION COL2ROW

#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define WEAR_LEVELING_LOGICAL_SIZE (1024*9) /*8192 is just an example*/
#define WEAR_LEVELING_BACKING_SIZE (1024*9*2)  