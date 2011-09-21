/**
 * @brief The following C program segfaults of IA-64, but works fine on IA-32.
Why does it happen so?
 * @file 7.c
 */

int main()
{
    int* p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    return 0;
}
