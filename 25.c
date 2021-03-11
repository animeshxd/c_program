//25. Write a program to display sum of the series S=1+x +x²/2! +x³/3! +x⁴/4! +x⁵/5! + x⁶/6!, where the value of x is given by the user.

#include<stdio.h>

main()
{
    int x, i, p = 1, f = 1;
    float s  = 1.0;
    printf("Enter the number ");
    scanf("%d",&x);
    for ( i = 1; i <= 6; i++)
    {
        p = p * x;
        f = f * i;
        s = s + p / f;
    }
    printf("%f",s);
}