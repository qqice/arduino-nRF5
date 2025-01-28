/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_DWM3001CDK_
#define _VARIANT_DWM3001CDK_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (36u)
#define NUM_DIGITAL_PINS     (13u)
#define NUM_ANALOG_INPUTS    (1u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define PIN_LEDRT            (30)
#define PIN_LEDRB            (31)
#define PIN_LEDG             (32)
#define PIN_LEDB             (33)
#define LED_BUILTIN          PIN_LEDRT
static const uint8_t LED_RED_TOP = PIN_LEDRT ;
static const uint8_t LED_RED_BOT = PIN_LEDRB ;
static const uint8_t LED_GREEN   = PIN_LEDG ;
static const uint8_t LED_BLUE    = PIN_LEDB ;

// Button
#define PIN_BUTTON_TOP       (34)
#define PIN_BUTTON_BOTTOM    (35)

static const uint8_t BTN = PIN_BUTTON_TOP ;

/*
 * Analog pins
 */
#define PIN_A0               (28)

static const uint8_t A0  = PIN_A0 ; // AIN4

#define ADC_RESOLUTION    14

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (15)
#define PIN_SERIAL_TX       (16)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (20)
#define PIN_SPI_MOSI         (21)
#define PIN_SPI_SCK          (22)
#define PIN_SPI_SS           (19)

static const uint8_t SS   = PIN_SPI_SS ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 2

#define PIN_WIRE_SDA         (26)
#define PIN_WIRE_SCL         (23)

static const uint8_t SDA = PIN_WIRE_SDA ;
static const uint8_t SCL = PIN_WIRE_SCL ;

#define PIN_ACC_SDA         (17)
#define PIN_ACC_SCL         (18)

static const uint8_t ACC_SDA = PIN_ACC_SDA;
static const uint8_t ACC_SCL = PIN_ACC_SCL;

/*
 * Other DWM3001C internal IOs
 */
#define PIN_DW_RST           (27)
#define PIN_DW_IRQ           (28)
#define PIN_DW_SCK           (26)
#define PIN_DW_MISO          (24)
#define PIN_DW_MOSI          (25)
#define PIN_DW_CS            (23)

static const uint8_t DW_RST = PIN_DW_RST;
static const uint8_t DW_IRQ = PIN_DW_IRQ;
static const uint8_t DW_SCK = PIN_DW_SCK;
static const uint8_t DW_MISO = PIN_DW_MISO;
static const uint8_t DW_MOSI = PIN_DW_MOSI;
static const uint8_t DW_CS = PIN_DW_CS;

#define PIN_ACC_IRQ          (29)

static const uint8_t ACC_IRQ = PIN_ACC_IRQ;

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
