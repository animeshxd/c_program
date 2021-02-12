//6. Write a program to take 2 numbers and check 2 numbers are equal or maximum.
#include<stdio.h>

main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    if (a == b)
        printf("Two Numbers are equal");
    else if (a > b)
        printf("%d is max",a);
    else
        printf("%d is max", b);
 
    
}