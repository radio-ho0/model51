#include <at89x52.h>
#include "lcd1602.h"

/* 
+--------+------+------+-----------+
|   P0   |  P1  | P2   |  P3       |
+--------+------+------+-----------+
|   0x80 | 0x90 | 0xA0 | 0xB0      |
+--------+------+------+-----------+
*/
__sfr __at 0x80 LED;
__sfr __at 0x90 NUM;
__sbit __at 0x80 LED1;

enum count_num{
    TIMER_1S = 200,

};

#define GDO(count, val, func) do\
            {\
                if(++count > val){\
                    count = 0;\
                    func();\
                }\
        }while(0)


#define TIMES (5000)

#define TH0_0 ((8192 - TIMES) >> 8 )
#define TL0_0 (8192 - TIMES)

int count = 0;
int wait = 0;
void interrupt1(void)  __interrupt(1);

void blink_led(void);
void null_func(void);


void main(void)
{

    InitLcd1602(); 

    TMOD = 0x00;
    ET0 = 1;
    TR0 = 1;
    TL0 = TL0_0;
    TH0 = TH0_0;
    EA = 1;

	P0 = 0x81;

    ShowStr("hello World!");
    LcdShowNum(1, 1, 123);
	for (;;) {
	}

}

void interrupt1(void) __interrupt(1)
{

    TL0 = TL0_0;
    TH0 = TH0_0;

    GDO(count, TIMER_1S, null_func);
	GDO(wait, 100, blink_led);
}
void blink_led(void)
{
    P1 = ~P1;
}
    

void null_func(void)
{

}
