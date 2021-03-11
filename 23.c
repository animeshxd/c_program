//23. Write a program to display nth term Fibonacci series where n is given by the user.
#include<stdio.h>

main()
{
    int n,a,b,c,i = 1;
    printf("Enter the range ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    printf("%d %d ",a,b);
    while (i <= (n-2))
    {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
        i++;
        
    }
    
}