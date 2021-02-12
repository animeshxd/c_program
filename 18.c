
//18. Write a program to take a number and calculate the sum of digit of a number.
#include<stdio.h>

main()
{
    int x, p, s = 0 ;
    printf("Enter the Number ");
    scanf("%d",&x);
    while (x>0)
    {
        p = x % 10;
        s = s + p;
        x = x / 10;
    }
    printf("%d",s);

/*
    for  (; x > 0; x = x / 10)
    {
        p = x % 10;
        s = s + p;
        
    }
    printf("%d",s);
*/


 
    
}