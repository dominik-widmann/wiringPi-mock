/*
 *  bliky.cpp
 *
 *  Created on: Feb 13, 2021
 *
 *  Copyright (c) 2021 Jan-Hendrik Ewers.
 *
 *  This file is part of wiringPi-mock.
 *
 *  This program is free software: you can redistribute it and/or
 *  modify it under the terms of the Lesser GNU General Public
 *  License as  published by the Free Software Foundation, either
 *  version 3 of the  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *  See the GNU General Public License for more details.
 *
 */

#include <unistd.h>
#include <wiringPiI2C.h>

#define I2C_ADDRESS 0x48
#define DUMMY_REGISTER 0
#define DELAY 100

int main(void) {
  int i2c_filehandle_ = wiringPiI2CSetup(I2C_ADDRESS);

  for (int i = 0; i < 10; i++) {
    // dummy read
    const int data = wiringPiI2CReadReg16(i2c_filehandle_, DUMMY_REGISTER);

    usleep(100);
  }

  return 0;
}
