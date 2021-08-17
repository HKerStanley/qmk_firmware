/* Copyright 2021 Gigahawk
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

#include "config_common.h"
#include "quantum.h"

/* USB Device descriptor parameter */
#define DEVICE_VER 0x0001
#define VENDOR_ID 0x320F
#define PRODUCT_ID 0x5044
#define MANUFACTURER Glorious
#define PRODUCT GMMK Pro

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS \
    { B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10 }
#define MATRIX_COL_PINS \
    { A0, A1, A2, A3, A4, A8, A9, A10 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Hold ESC on start up to clear EEPROM and boot into bootloader mode */
#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 3

#define TAP_CODE_DELAY 10
#define ENCODERS_PAD_A \
    { C15 }
#define ENCODERS_PAD_B \
    { C14 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* SPI Config for LED Driver */
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A6
#define SPI_MISO_PIN A7

#define DRIVER_1_CS B13
#define DRIVER_2_CS B14
#define DRIVER_1_EN C13
#define DRIVER_2_EN C13

#define DRIVER_COUNT 2

/* 1000Hz USB polling - it's the default on stock firmware */
#define USB_POLLING_INTERVAL_MS 1

/* Send up to 4 key press events per scan */
#define QMK_KEYS_PER_SCAN 4

/* Set debounce time to 5ms */
#define DEBOUNCE 5

/* Force NKRO on boot up regardless of the setting saved in the EEPROM (uncomment to enable it) */
// #define FORCE_NKRO

#define DRIVER_1_LED_TOTAL 66
#define DRIVER_2_LED_TOTAL 32
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#define ___ KC_NO

//  ESC  F1   F2   F3   F4   F5   F6   F7   F8   F9   F10  F11  F12  Prt      Rotary(Mute)
//  `    1    2    3    4    5    6    7    8    9    0    -    =    BSpc     Del
//  Tab  Q    W    E    R    T    Y    U    I    O    P    [    ]    \        PgUp
//  Caps A    S    D    F    G    H    J    K    L    ;    '        Enter     PgDn
//  Sh_L Z    X    C    V    B    N    M    ,    .    /       Sh_R       Up   End
//  Ct_L    Win_L   Alt_L      SPACE          Alt_R   FN   Ct_R     Left Down Right

// clang-format off
#define LAYOUT( \
    k13, k26, k36, k31, k33, k07, k63, k71, k76, ka6, ka7, ka3, ka5, k97,     k01, \
    k16, k17, k27, k37, k47, k46, k56, k57, k67, k77, k87, k86, k66, ka1,     k65, \
    k11, k10, k20, k30, k40, k41, k51, k50, k60, k70, k80, k81, k61, ka2,     k15, \
    k21, k12, k22, k32, k42, k43, k53, k52, k62, k72, k82, k83,     ka4,      k25, \
    k00, k14, k24, k34, k44, k45, k55, k54, k64, k74, k85,    k91,       k35, k75, \
    k06,    k90,    k93,       k94,           k95,    k92, k04,     k03, k73, k05  \
) \
{ \
    { k00, k01, ___, k03, k04, k05, k06, k07}, \
    { k10, k11, k12, k13, k14, k15, k16, k17}, \
    { k20, k21, k22, ___, k24, k25, k26, k27}, \
    { k30, k31, k32, k33, k34, k35, k36, k37}, \
    { k40, k41, k42, k43, k44, k45, k46, k47}, \
    { k50, k51, k52, k53, k54, k55, k56, k57}, \
    { k60, k61, k62, k63, k64, k65, k66, k67}, \
    { k70, k71, k72, k73, k74, k75, k76, k77}, \
    { k80, k81, k82, k83, ___, k85, k86, k87}, \
    { k90, k91, k92, k93, k94, k95, ___, k97}, \
    { ___, ka1, ka2, ka3, ka4, ka5, ka6, ka7}  \
}
