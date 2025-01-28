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

#include "variant.h"

const uint32_t g_ADigitalPinMap[] = {
  // D0 - D11
  17,
  12,
  21,
  20,
  11,
  40,
  6,
  33,
  13,
  41,
  32,
  37,

  // SDA, SCL
  26,
  23,

  // A0
  28,

  // RX, TX
  19,
  15,

  // ACC SDA, SCL
  24,
  36,

  // SPI SS, MISO, MOSI, SCK
  30,
  7,
  27,
  31,

  // DWM3001C
  // SPI SS1, MISO1, MOSI1, SCK1
  38,
  29,
  8,
  3,
  // RST, IRQ
  25,
  34,

  // ACC IRQ
  16,

  // LEDS
  14,
  22,
  4,
  5,

  // BTN
  18,
  2

};
