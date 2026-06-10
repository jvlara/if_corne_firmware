 /* Copyright HarshitGoel96 2020
  * With permission from mattdibi, the original maintainer of the Redox hardware.
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
#include QMK_KEYBOARD_H

#include "keymap_spanish.h"
#include "bootloader.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
)
,

[1] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
)
,
[2] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
),
[3] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
)
,
[4] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
)
,[5] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
)
,[6] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
)
,[7] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
),[8] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
),[9] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,    KC_PGUP,              KC_PGDN,     KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,       KC_VOLU,               KC_VOLD,         KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,       KC_INS,               KC_HOME,       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_SPC,         KC_BSPC,              KC_DEL,        KC_SPC,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,        KC_VOLU ,       KC_VOLD,    KC_PSCR,                                                                          KC_MUTE,          KC_QUOT,    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,


        KC_ESC,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,             KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,             KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,             KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_SPC,                                                        KC_SPC,         KC_LGUI,    KC_LCTL,


        KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_PGUP,    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_PGDN,    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_DEL,     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_UP, KC_RSFT,  MO(1),
                    KC_LCTL,    KC_LGUI, KC_LALT, KC_SPC,                                             KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RCTL,


        KC_ESC,     KC_1,       KC_2,           KC_3,           KC_4,        KC_5,        KC_LBRC,                    KC_RBRC,    KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,           KC_E,           KC_R,        KC_T,        KC_MINUS,                       KC_EQUAL,       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_CAPS,    KC_A,       KC_S,           KC_D,           KC_F,        KC_G,        KC_COMMA,                       KC_DOT,         KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,           KC_C,           KC_V,        KC_B,        KC_VOLU,                         KC_VOLD,         KC_N,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,      KC_RSFT,
        KC_LGUI,    KC_LALT,    KC_SPC,         KC_LCTL,        KC_PGUP,                                                  KC_PGDN,      KC_LCTL,        KC_SPC,         KC_LALT,    KC_LGUI
)
};



enum BackupRegister {
    BKP0 = 0,
    BKP1,
    BKP2,
    BKP3,
    BKP4,
};

static const uint32_t CMD_BOOT = 0x544F4F42UL;
// static const uint32_t CMD_APP = 0x3f82722aUL;

void backup_write(enum BackupRegister reg, uint32_t value) {
    (void)reg;
    *(volatile uint32_t *)0x20004000 = value;
}

void keyboard_pre_init_kb(void) {
    // backup_write(BKP0, CMD_APP);
}

// 处理软件进入bootloader
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_BOOTLOADER:
            // 进入bootlader
            backup_write(BKP0, CMD_BOOT);
            NVIC_SystemReset();
            return false;
            break;

        case QK_CLEAR_EEPROM:
            // 进入bootmagic_lite清空eeprom
            eeconfig_init_via();
            NVIC_SystemReset();
            return false;
            break;
        default:
            break;
    }
    return true;
}
