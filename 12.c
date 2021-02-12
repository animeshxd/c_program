//Write a program to take a number and check if the number is triple digit same number or not.
#include<stdio.h>

main()
{
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    if(x > 99 && x < 1000)
    {
        if(x % 111 == 0)
            printf("%d is triple digit same number",x);
        else
            printf("%d is not triple digit same number",x);
    
    }
    else
        printf("%d is not triple digit same number", x);
    
    
}