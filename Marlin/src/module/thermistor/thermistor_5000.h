/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// Custom User-defined table

const temp_entry_t temptable_5000[] PROGMEM = {
  { OV(   1), 713 },
  //{ OV(  17), 300 }, // top rating 300C
  //{ OV(  20), 290 },
  //{ OV(  23), 280 },
  //{ OV(  27), 270 },
  { OV(  46), 260 },
  { OV(  55), 250 }, //ok TOP RATING
  { OV(  62), 245 }, //ok
  { OV(  68), 240 }, //ok
  { OV(  81), 230 }, //ok
  { OV(  91), 220 }, //ok
  { OV( 104), 215 }, //ok
  { OV( 112), 210 }, //ok
  { OV( 133), 200 }, //ok
  { OV( 152), 195 }, //ok
  { OV( 158), 190 }, //ok
  { OV( 203), 180 }, //ok
  { OV( 251), 170 }, //ok 
  { OV( 281), 160 }, //ok
  { OV( 343), 150 }, //ok
  { OV( 361), 145 }, //ok
  { OV( 381), 140 }, //ok
  { OV( 445), 135 }, //ok
  { OV( 452), 130 }, //ok
  { OV( 481), 125 }, //ok
  { OV( 498), 120 }, //ok
  { OV( 543), 115 }, //ok
  { OV( 564), 110 }, //ok
  { OV( 613), 105 }, //ok
  { OV( 673), 100 }, //ok
  { OV( 769),  90 }, //ok
  { OV( 782),  80 }, //ok
  { OV( 816),  70 }, //ok 
  { OV( 847),  65 }, //ok
  { OV( 909),  50 }, //ok
  { OV( 915),  48 }, //ok
  { OV( 935),  43 }, //ok
  { OV( 954),  36 }, //ok
  { OV( 967),  30 }, //ok
  { OV( 978),  25 }, 
  { OV( 989),  17 }, //ok
  { OV(1000),  10 },
  { OV(1010),   0 }
};
