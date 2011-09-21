/**
 * @brief  
 * @file endianness.c
 */

#include <stdio.h>
#include <stdint.h>

uint8_t val[4] = { 0xFF, 0xAA, 0x55, 0x00 };

int main()
{
    uint32_t * v = (uint32_t *)val;
    if(*v == 0xFFAA5500)
        printf("Big Endian !\n");
    else if(*v == 0x0055AAFF)
        printf("Little Endian !\n");
    return 0;
}
