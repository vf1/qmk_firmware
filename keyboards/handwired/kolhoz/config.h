// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define RGBLIGHT_LAYER_BLINK

#define ENCODER_RESOLUTION 1

#define ENCODER_A_PINS { GP2 }
#define ENCODER_B_PINS { GP3 }

// #define POINTING_DEVICE_MOTION_PIN GP20

#define POINTING_DEVICE_DEBUG

// SPI Configuration
#define SPI_DRIVER       SPID1
// https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf#page=14
#define SPI_SCK_PIN      GP26  // sck
#define SPI_MOSI_PIN     GP27  // tx
#define SPI_MISO_PIN     GP28  // rx
/* pmw3360 config  */
#define PMW33XX_CS_PIN   GP29  // csn
#define POINTING_DEVICE_MOTION_PIN GP22

// #define PMW33XX_SPI_DIVISOR                  8
#define PMW33XX_CPI 1600      // The CPI range is 100-12000, in increments of 100. Defaults to 1600 CPI.
#define PMW33XX_CLOCK_SPEED 2000000 // Sets the clock speed that the sensor runs at. Defaults to 2000000
#define MOUSE_EXTENDED_REPORT // Use -32767 to 32767, instead of just -127 to 127./
