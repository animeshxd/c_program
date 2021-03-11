//26. Write a program to display sum of the series S = 1+11+111+1111+11111.
#include<stdio.h>

main()
{
    int s = 0, i, p = 0;
    for ( i = 1; i <= 5; i++)
    {
        s = (s * 10) + 1;
        p = p + s;
    }
    printf("%d",p);
}