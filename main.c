/* Convert hex to bin */
#include <stdio.h>
#include <stdint.h>

uint8_t hex=0x53, chk, size=7;
uint8_t binArray[7];

int main()
{
    for(uint8_t i=0; i<8; i++)
    {
        chk=hex>>i;
        if(chk & 1)
        {
            binArray[size]=1;
            size--;
        }
        else
        {
            binArray[size]=0;
            size--;
        }
    }
    for(uint8_t i=0; i<8; i++)
    {
        printf("%d",binArray[i]);
    }
    return 0;
} 
