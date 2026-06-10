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

#include <stdint.h>
#include <stdbool.h>
#include "print.h"
#include "debug.h"

#include "wait.h"
#include "util.h"
#include "matrix.h"
#include "timer.h"
#include "uart.h"

#include "chprintf.h"

#undef SERIAL_DRIVER
#define SERIAL_DRIVER SD2
#define SD1_TX_PIN A2
#define SD1_RX_PIN A3



#define uart_data_lenth (MATRIX_ROWS * 2 + 1)
#define shifting_col (MATRIX_COLS / 2)

#if (MATRIX_COLS <= 8)
#    define print_matrix_header() print("\nr/c 01234567\n")
#    define print_matrix_row(row) print_bin_reverse8(matrix_get_row(row))
#    define matrix_bitpop(i) bitpop(matrix[i])
#    define ROW_SHIFTER ((uint8_t)1)
#elif (MATRIX_COLS <= 16)
#    define print_matrix_header() print("\nr/c 0123456789ABCDEF\n")
#    define print_matrix_row(row) print_bin_reverse16(matrix_get_row(row))
#    define matrix_bitpop(i) bitpop16(matrix[i])
#    define ROW_SHIFTER ((uint16_t)1)
#elif (MATRIX_COLS <= 32)
#    define print_matrix_header() print("\nr/c 0123456789ABCDEF0123456789ABCDEF\n")
#    define print_matrix_row(row) print_bin_reverse32(matrix_get_row(row))
#    define matrix_bitpop(i) bitpop32(matrix[i])
#    define ROW_SHIFTER ((uint32_t)1)
#endif

/* matrix state(1:on, 0:off) */
static matrix_row_t matrix[MATRIX_ROWS];

void matrix_init_kb(void) {
    uart_init(1000000);
}

void matrix_init_quantum(void) {
    matrix_init_kb();
}

void matrix_scan_kb(void) {
    matrix_scan_user();
}

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

uint8_t matrix_rows(void) {
    return MATRIX_ROWS;
}

uint8_t matrix_cols(void) {
    return MATRIX_COLS;
}

void matrix_init(void) {
    matrix_init_quantum();
}

void matrix_init_custom(void) {
}

uint8_t matrix_scan(void) {

    uart_write('s');

    uint8_t uart_data[uart_data_lenth] = {0};
    if (sdReadTimeout(&SERIAL_DRIVER, uart_data, uart_data_lenth, TIME_MS2I(1))) {
        if (uart_data[uart_data_lenth - 1] == 0xE0) {
            // shifting and transferring the keystates to the QMK matrix variable
            for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
                matrix[i] = (matrix_row_t)uart_data[i * 2] | (matrix_row_t)uart_data[i * 2 + 1] << shifting_col;
            }
        }
    }

    matrix_scan_kb();
    return 1;
}

bool matrix_is_on(uint8_t row, uint8_t col) {
    return (matrix[row] & ((matrix_row_t)1 << col));
}

matrix_row_t matrix_get_row(uint8_t row) {
    return matrix[row];
}

void matrix_print(void) {
    print_matrix_header();

    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        print_hex8(row);
        print(": ");
        print_matrix_row(row);
        print("\n");
    }
}

uint8_t matrix_key_count(void) {
    uint8_t count = 0;
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        count += matrix_bitpop(i);
    }
    return count;
}