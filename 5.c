/**
 * @brief  Just by looking at the program one "might" expect the output to be, the same for both the printf statements
 * @file 5.c
 */

#include <stdio.h>
#define f(a,b) a##b
#define g(a)   #a
#define h(a) g(a)

int main()
{
    printf("%s\n",h(f(1,2)));
    printf("%s\n",g(f(1,2)));
    return 0;
}
