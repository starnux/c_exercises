/**
 * @brief Here is a small piece of program(again just 14 lines of program) which counts the number of bits set in a number.
 * @file 8.c
 */

int CountBits (unsigned int x )
{
    static unsigned int mask[] = { 0x55555555,
        0x33333333,
        0x0F0F0F0F,
        0x00FF00FF,
        0x0000FFFF
    } ;

    int i ;
    int shift ; /* Number of positions to shift to right*/
    for ( i =0, shift =1; i < 5; i ++, shift *= 2)
        x = (x & mask[i ])+ ( ( x >> shift) & mask[i]);
    return x;
}
