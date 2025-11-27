// C program for Byte Swap
/* example input 0xcc8700fc expected output 0xfc0087cc*/
#include <stdio.h>
#include <stdint.h>

uint32_t swapBytes(uint32_t Data)
{
    uint32_t Output=0x0;
    uint8_t Temp= 0x0;
    
    for(int i=0;i<4;i++)
    {
        Output=Output<<8;
        Temp=Data<<(8*i)&0xFF; // input value and with ff to reverse the byte
        Output=Output+Temp;
    }
    return Output;
}


int main() {
    // Write C code here
    uint32_t input=0xcc8700FC,Output=swapBytes(input);
    printf("Input=0x%x and Output=0x%x",input,Output);

    return 0;
}
