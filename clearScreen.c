#include "config.h"
#include "set_address.h"
#include "lcdWrite.h"
void clearScreen(void)
{
    uchar x, y;
    for(y = 0; y < 6; y++)
    {
        for(x = 0; x < 84; x++)
        {
            set_address(x,y);
            lcdWrite(0x00, HIGH);
        }
    }
}
