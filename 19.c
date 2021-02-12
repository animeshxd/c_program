//19. Write a program to take a number and calculate the factorial of that number.
#include<stdio.h>

main()
{
    int n , f = 1 ,i=1;
    printf("Enter the number ");
    scanf("%d",&n);
    while( i <= n )
    {
        f = f * i;
        i++;
    }
    printf("%d",f);
/*
    for(;i <= n;i++)
    {
        f = f * 1;

    }
     printf("%d",f);
     
*/

}