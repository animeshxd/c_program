//2. program to take 2 number and calculate the sum and multiplication of those 2 numbers

#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    c = a + b;
    d = a * b;
    printf("The sum and multiplication of two numbers are %d %d",c,d);
}