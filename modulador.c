#include <stdio.h>
#include <stdlib.h>
#include <delays.h>
#include <p18f4550.h>
/*
 *
 */
int main(){
    #define CHAVE   PORTBbits.RB1
    #define LED     PORTDbits.RD3
    char estado = 0;
    TRISD =  0b00000001;
    TRISB =  0b00000010;
    ADCON1 = 0b00001111;

        while(1)
    {
        if (CHAVE == 0)
        {
            Delay10KTCYx(50);

            if (estado == 0)
            {
                estado = 1;
            }
            else
            {
                estado = 0;
            }
        }

        LED = estado;
    }
}