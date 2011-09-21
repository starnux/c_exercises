/**
 * @brief What's the expected output for the following program and why?
 * @file 3.c
 */

enum {false,true};

int main()
{
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
        if(i < 15)
            continue;
    }while(false);
    return 0;
}
