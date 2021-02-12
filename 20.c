//20. Write a program to take a number and check if the number is palindrome or not.

#include<stdio.h>

main()
{
    int x, p, s = 0 , y;
    printf("Enter the Number ");
    scanf("%d",&x);
    y = x;
    while (x>0)
    {
        p = x % 10;
        s = s * 10 + p;
        x = x / 10;
    }
    if (y == s)
        printf("%d is palindrome",y);
    else
       printf("%d is not palindrome",y);
  
/*
    for  (; x > 0; x = x / 10)
    {
        p = x % 10;
        s = s * 10 + p;
        
    }
    if (y == s)
        printf("%d is palindrome",y);
    else
       printf("%d is  not palindrome",y); 
*/
}