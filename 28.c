//28. Write a program to display the series S= 1+22+333+4444+55555.
#include<stdio.h>

main()
{
    int i, p = 0, s = 0, a = 1;
    for ( i = 1; i <= 5; i++)
    {
        p = p * 10 + 1;
        a = p * i;
        s = s + a;
    }
    printf("%d",s);
    
}