#include "mbed.h"
#include "uLCD_4DGL.h"

Serial pc( USBTX, USBRX );
uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);

int main()
{
    float i;
    uLCD.line(20,20,40,20,0xFFFFFF);
    uLCD.line(40,20,40,40,0xFFFFFF);
    uLCD.line(20,20,20,40,0xFFFFFF);
    uLCD.line(20,40,40,40,0xFFFFFF);
    uLCD.printf("\n106061236\n"); //Default Green on black text
    

    PWM1.period(0.001);
    while(true)
    {
        for(i=0;i<1;i+=0.1)
        {
            PWM1 = i;
            wait(0.1);
        }
        for(i=1;i>0;i-=0.1)
        {
            PWM1 = i;
            wait(0.1);
        }
    }
}