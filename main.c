/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 21 August 2019, 19:41
 */
/*                  16f1459
 *                  ---------
 *   +5 Volts    1 |Vdd      | 20 0 Volts
 *Player select  2 |RA5      | 19
 * Paddle up  L  3 |RA4      | 18
 *    MCLR/ RST  4 |         | 17
 *    GREEN LED  5 |RC5      | 16
 *           CE  6 |RC4      | 15
 *RST op to 5110 7 |         | 14  RC2 Paddle down L
 *           SS  8 |         | 13 
 *           SDO 9 |         | 12
 *           TX 10 |         | 11  SCK
 *                  ---------
 
 */



#include "config.h"
#include <stdio.h>
#include "main.h"
#include "config_osc.h"
#include "setup_ports.h"
#include "init_spi.h"
#include "set_usart.h"
#include "putch.h"
#include "lcd_setup.h"
#include "TMR0_setup.h"
#include "TMR1_setup.h"
#include "interrupt isr.h"
#include "lcdWrite.h"
#include "clearScreen.h"
#include "set_address.h"
#include "TMR1_setup.h"

void main(void) 
{
    config_osc();       // internal clock frequency = 8MHz
    setup_ports();      // configures switch inputs and LCD output pins
    init_spi();         // configures serial communications with the Nokia 5110 LCD
    set_usart();        // sets up the standard serial output to ESPlora/ Putty etc. for debug purposes
    lcd_setup();        // configures the LCD
    clearScreen();      // clears LCD of any previously written data
    printf("hello world :-)\n");
    uchar row, col, y, x;
  //  screenBuffer[4][70] = 0x0f;
   // screenBuffer[4][71] = 0x0f;
  //  screenBuffer[4][72] = 0x0f;
  //  screenBuffer[4][73] = 0x0f;
    row = 4;
    
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
    for(col = 70; col< 74; col++)
    {
    set_address(col, 4);
    lcdWrite(0x0f, HIGH);
    }
    __delay_ms(16);
    clearScreen();
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
    for(col = 71; col< 75; col++)
    {
    set_address(col, 4);
    lcdWrite(0x0f, HIGH);
    }
    __delay_ms(16);
    clearScreen();
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
    for(col = 72; col< 76; col++)
    {
    set_address(col, 4);
    lcdWrite(0x0f, HIGH);
    }
    __delay_ms(16);
    clearScreen();
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
    for(col = 73; col< 77; col++)
    {
    set_address(col, 4);
    lcdWrite(0x0f, HIGH);
    }
    __delay_ms(16);
    clearScreen();
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
    for(col = 74; col< 78; col++)
    {
    set_address(col, 4);
    lcdWrite(0x0f, HIGH);
    }
    __delay_ms(16);
    clearScreen();
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
    for(col = 75; col< 79; col++)
    {
    set_address(col, 4);
    lcdWrite(0x0f, HIGH);
    }
    __delay_ms(16);
    clearScreen();
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
    for(col = 76; col< 80; col++)
    {
    set_address(col, 4);
    lcdWrite(0x0f, HIGH);
    }
    __delay_ms(16);
    clearScreen();
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
    for(col = 77; col< 81; col++)
    {
    set_address(col, 4);
    lcdWrite(0x0f, HIGH);
    }
    __delay_ms(16);
    clearScreen();
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            lcdWrite(screenBuffer[row][col], HIGH);
        }
    }
while(1)
{
    
}
    
}