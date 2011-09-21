/**
 * @brief  The following program doesn't "seem" to print "hello-out". (Try executing it)
 * @file 4.c
 */

#include <stdio.h>
#include <unistd.h>
int main()
{
    while(1)
    {
        fprintf(stdout,"hello-out");
        fprintf(stderr,"hello-err");
        sleep(1);
    }
    return 0;
}
