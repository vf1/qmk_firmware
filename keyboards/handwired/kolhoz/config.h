// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define RGBLIGHT_LAYER_BLINK

#define ENCODER_RESOLUTION 1

#define ENCODER_A_PINS { GP16 }
#define ENCODER_B_PINS { GP17 }

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
#define PMW33XX_CPI      1000      // The CPI range is 100-12000, in increments of 100. Defaults to 1600 CPI.
#define PMW33XX_CLOCK_SPEED 2000000 // Sets the clock speed that the sensor runs at. Defaults to 2000000
#define MOUSE_EXTENDED_REPORT // Use -32767 to 32767, instead of just -127 to 127./

// #define ROTATIONAL_TRANSFORM_ANGLE
// #define POINTING_DEVICE_ROTATION_180
// #define ROTATIONAL_TRANSFORM_ANGLE
#define POINTING_DEVICE_INVERT_Y

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER           3


// audio
// doc about PWMDx and channel A,B relation to GPy
// https://github.com/khoih-prog/RP2040_PWM?tab=readme-ov-file#programmers-model
#define AUDIO_PIN GP18
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define AUDIO_INIT_DELAY
// #define AUDIO_CLICKY



#define SPLIT_HAND_MATRIX_GRID_LOW_IS_LEFT
