//17. Write a program to display even or odd number from 1-50.
#include<stdio.h>

main()
{
    int i = 1;
    while (i <= 50)
    {
        if(i % 2 == 0)
            printf("%d is even \n",i);
        else
            printf("%d is odd \n",i);
        i++;
    }
/*
     for (; i <= 50;i++)
    {
        if(i % 2 == 0)
            printf("%d is even \n",i);
        else
            printf("%d is odd \n",i);
        
    }
    
*/

}