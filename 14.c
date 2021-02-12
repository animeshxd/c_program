//14. Write a program to take a number from the user and check if the number is even or odd.
#include<stdio.h>

main()
{
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    if(x%2 == 0)
        printf("%d in even number",x);
    else
        printf("%d is odd number",x);
}