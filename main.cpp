/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "TextLCD.h"
#include <iostream>

using namespace std;

TextLCD lcd(D2, D3, D4, D5, D6, D7, TextLCD::LCD16x2);
UnbufferedSerial pc(USBTX, USBRX, 9600);

int main()
{
    char* a;
    cout << "ingrese" << endl;
    cin >> a;
    lcd.printf(a);
}
