/**
 * @brief  What do you think would be the output of the following program and why? (If you are about to say "f is 1.0", I would say check it out again)
 * @file 9.c
 */

#include <stdio.h>

int main()
{
    float f=0.0f;
    int i;

    for(i=0;i<10;i++)
        f = f + 0.1f;

    if(f == 1.0f)
        printf("f is 1.0 \n");
    else
        printf("f is NOT 1.0\n");

    return 0;
}
