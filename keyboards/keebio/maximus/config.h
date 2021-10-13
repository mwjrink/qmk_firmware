/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0001
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0005
#define MANUFACTURER    Maximus
#define PRODUCT         EndGame
#define DESCRIPTION     My end game keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

// wiring of each half
#define MATRIX_ROW_PINS { D3, D2, D4, C6, D7, E6 }
#define MATRIX_COL_PINS { B5, B6, B2, B3, B1, F7, F6, F5, F4 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* https://medium.com/@keebio/the-case-of-the-wayward-elite-c-73f0fd691f88 */
// bug in default for detecting slave half of keyboard
// #define SPLIT_USB_DETECT
// #define SPLIT_USB_TIMEOUT 2000
// #define SPLIT_USB_TIMEOUT_POLL 10

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/* serial.c configuration for split keyboard */
// i2c on left works great, on right it causes lots of missed keys
#define SOFT_SERIAL_PIN D0
// #define USE_I2C
#define MASTER_LEFT

/* ws2812 RGB LED */
// #define RGB_DI_PIN B4
// #define RGBLED_NUM 20    // Number of LEDs

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
#undef NO_DEBUG
#define NO_DEBUG

/* disable print */
#undef NO_PRINT
#define NO_PRINT

/* disable action features */
// #define NO_ACTION_TAPPING // this disabled the ability to use MO(1)

#define NO_ACTION_ONESHOT

#undef NO_ACTION_MACRO
#define NO_ACTION_MACRO

#undef NO_ACTION_FUNCTION
#define NO_ACTION_FUNCTION

#undef NO_ACTION_LAYER

/* NKRO by default requires to be turned on, this forces it on during
keyboard startup regardless of EEPROM setting. NKRO can still be turned
off but will be turned on again if the keyboard reboots. */
#define FORCE_NKRO
