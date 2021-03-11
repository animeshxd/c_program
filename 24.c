//24. Write a program to display the sum of the series s=1+x +x² +x³ +x⁴ +x⁵ , where the value of x is given by the user.

#include<stdio.h>

main()
{
    int x, s=1, i, p=1;
    printf("Enter the number ");
    scanf("%d",&x);
    for ( i = 1; i <= 5; i++)
    {
       p = p * x;
       s = p + s;
    }
    printf("%d",s);
    

}