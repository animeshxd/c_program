//22. Write a program to display the sum of n numbers where n is given by the user.
#include <stdio.h>
#include<stdio.h>

main()
{
    int i, n, s=0;
    printf("Enter the range ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        s = s + i;
    
    }
    printf("%d",s);
    
}