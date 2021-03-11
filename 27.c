//27. Write a program to display the sum of the series S = 1+12+123+1234+12345.

#include<stdio.h>

main()
{
    int  i, p = 0, s = 0;
    for ( i = 1; i <= 5; i++)
    {
        s = (s * 10) + i;
        p = p + s;
    }
    printf("%d",p);

    
}