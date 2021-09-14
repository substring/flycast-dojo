/*
 *  Created on: apr 11, 2019

	Copyright 2018 barbudreadmon

	This file is part of reicast.

    reicast is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    reicast is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with reicast.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef CORE_HW_NAOMI_NAOMI_ROMS_EEPROM_H_
#define CORE_HW_NAOMI_NAOMI_ROMS_EEPROM_H_

static u8 mamonoro_eeprom_dump[] = {
	0x96, 0xB2, 0x11, 0x42, 0x51, 0x53, 0x30, 0x09, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x96, 0xB2, 0x11, 0x42, 0x51, 0x53, 0x30, 0x09, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 alpilot_eeprom_dump[] = {
	0xD5, 0x0C, 0x10, 0x42, 0x41, 0x45, 0x30, 0x09, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x21, 0x11, 0x11, 0x11,
	0xD5, 0x0C, 0x10, 0x42, 0x41, 0x45, 0x30, 0x09, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x21, 0x11, 0x11, 0x11,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 pstone2_eeprom_dump[] = {
	0x3B, 0xD2, 0x10, 0x42, 0x42, 0x4A, 0x30, 0x09, 0x30, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x3B, 0xD2, 0x10, 0x42, 0x42, 0x4A, 0x30, 0x09, 0x30, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 illvelo_eeprom_dump[] = {
	0x37, 0xC6, 0x11, 0x42, 0x51, 0x52, 0x00, 0x09, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x37, 0xC6, 0x11, 0x42, 0x51, 0x52, 0x00, 0x09, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 sl2007_eeprom_dump[] = {
	0x38, 0xE9, 0x11, 0x42, 0x50, 0x4A, 0x30, 0x09, 0x10, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x38, 0xE9, 0x11, 0x42, 0x50, 0x4A, 0x30, 0x09, 0x10, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 alienfnt_eeprom_dump[] = {
	0x88, 0x69, 0x10, 0x42, 0x43, 0x51, 0x30, 0x18, 0x10, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x88, 0x69, 0x10, 0x42, 0x43, 0x51, 0x30, 0x18, 0x10, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x16, 0xE1, 0x18, 0x18, 0x16, 0xE1, 0x18, 0x18, 0x78, 0x56, 0x34, 0x12, 0x01, 0x01, 0x01, 0x03, 0x00, 0xFF,
	0xFE, 0xFE, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x56, 0x34, 0x12,
	0x01, 0x01, 0x01, 0x03, 0x00, 0xFF, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 gundmct_eeprom_dump[] = {
	0xbe, 0x46, 0x10, 0x42, 0x43, 0x56, 0x30, 0x18, 0x00, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0xbe, 0x46, 0x10, 0x42, 0x43, 0x56, 0x30, 0x18, 0x00, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x78, 0x1e, 0x10, 0x10, 0x78, 0x1e, 0x10, 0x10, 0x30, 0x56, 0x43, 0x42, 0x01, 0x05, 0x01, 0x01, 0x01, 0x00,
	0x02, 0x00, 0x02, 0x02, 0x00, 0x03, 0x30, 0x56, 0x43, 0x42, 0x01, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x00,
	0x02, 0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 gundmxgd_eeprom_dump[] = {
	0xd9, 0xd2, 0x10, 0x42, 0x44, 0x55, 0x30, 0x18, 0x00, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0xd9, 0xd2, 0x10, 0x42, 0x44, 0x55, 0x30, 0x18, 0x00, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x65, 0x4b, 0x20, 0x20, 0x65, 0x4b, 0x20, 0x20, 0x30, 0x55, 0x44, 0x42, 0x01, 0x05, 0x01, 0x01, 0x01, 0x00,
	0x02, 0x00, 0x02, 0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x30, 0x55, 0x44, 0x42, 0x01, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x00, 0x02, 0x02,
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 kick4csh_eeprom_dump[] = {
	0x3A, 0x6E, 0x10, 0x42, 0x4A, 0x47, 0x30, 0x18, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x3A, 0x6E, 0x10, 0x42, 0x4A, 0x47, 0x30, 0x18, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0xC7, 0x83, 0x28, 0x28, 0xC7, 0x83, 0x28, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 hmgeo_eeprom_dump[] = {
	0x6d, 0x46, 0x10, 0x42, 0x43, 0x57, 0x30, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x6d, 0x46, 0x10, 0x42, 0x43, 0x57, 0x30, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x69, 0x61, 0x20, 0x20, 0x69, 0x61, 0x20, 0x20, 0x06, 0x06, 0x01, 0x20, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01,
	0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x01, 0x20, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x03, 0x03, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 spawn_eeprom_dump[] = {
	0x37, 0x99, 0x10, 0x42, 0x41, 0x56, 0x35, 0x18, 0x10, 0x0B, 0x02, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x37, 0x99, 0x10, 0x42, 0x41, 0x56, 0x35, 0x18, 0x10, 0x0B, 0x02, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0xCE, 0x9A, 0x20, 0x20, 0xCE, 0x9A, 0x20, 0x20, 0x17, 0x12, 0x99, 0x19, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x06, 0x05, 0x00, 0x01, 0x01, 0x06, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x17, 0x12, 0x99, 0x19, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x03, 0x06, 0x05, 0x00, 0x01, 0x01, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 ringout_eeprom_dump[] = {
	0x79, 0xCD, 0x10, 0x42, 0x41, 0x46, 0x32, 0x18, 0x31, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x79, 0xCD, 0x10, 0x42, 0x41, 0x46, 0x32, 0x18, 0x31, 0x00, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 slashout_eeprom_dump[] = {
	0x7f, 0x5d, 0x10, 0x42, 0x43, 0x45, 0x30, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x7f, 0x5d, 0x10, 0x42, 0x43, 0x45, 0x30, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0xc6, 0xa4, 0x08, 0x08, 0xc6, 0xa4, 0x08, 0x08, 0x42, 0x43, 0x45, 0x30, 0x00, 0x02, 0x00, 0x00, 0x42, 0x43,
	0x45, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 spkrbtl_eeprom_dump[] = {
	0x42, 0xec, 0x10, 0x42, 0x43, 0x5a, 0x30, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x42, 0xec, 0x10, 0x42, 0x43, 0x5a, 0x30, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0xd5, 0x9f, 0x10, 0x10, 0xd5, 0x9f, 0x10, 0x10, 0x42, 0x43, 0x5a, 0x30, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00,
	0xc0, 0x12, 0x2c, 0x01, 0x01, 0x00, 0x42, 0x43, 0x5a, 0x30, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0xc0, 0x12,
	0x2c, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 vonot_eeprom_dump[] = {
	0x93, 0xac, 0x10, 0x42, 0x42, 0x56, 0x30, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x93, 0xac, 0x10, 0x42, 0x42, 0x56, 0x30, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0xb7, 0x0a, 0x1c, 0x1c, 0xb7, 0x0a, 0x1c, 0x1c, 0x66, 0x05, 0x4f, 0x56, 0x06, 0x00, 0x08, 0x00, 0x02, 0x02,
	0x02, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01,
	0x66, 0x05, 0x4f, 0x56, 0x06, 0x00, 0x08, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

static u8 wrungp_eeprom_dump[] = {
	0x53, 0x45, 0x10, 0x42, 0x44, 0x44, 0x34, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x53, 0x45, 0x10, 0x42, 0x44, 0x44, 0x34, 0x18, 0x10, 0x1a, 0x01, 0x01, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11,
	0x89, 0x55, 0x22, 0x24, 0x89, 0x55, 0x22, 0x24, 0x42, 0x44, 0x44, 0x34, 0x01, 0x01, 0x01, 0x00, 0x01, 0x02,
	0x80, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00,
	0x81, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x44, 0x44, 0x34, 0x01, 0x01, 0x01, 0x00, 0x01, 0x02,
	0x80, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00,
	0x81, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00
};

#endif /* CORE_HW_NAOMI_NAOMI_ROMS_EEPROM_H_ */