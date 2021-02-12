//21. Write a program to take a number check if the number is prime or not.

#include<stdio.h>

main()
{
    int x,i = 2,c = 0;
    printf("Enter the number ");
    scanf("%d",&x);
    while(i < x)
    {
        if (x % i == 0)
        {
            c++;
            break;

        }
        i++;
        
    }
/*
    for ( ; i < x ; i++)
    {
        if (x % i == 0)
        {
            c++;
            break;
        }
       
    }
 */   
    if(c == 0)
        printf("%d is prime number",x);
    else
        printf("%d is not prime number",x);
}