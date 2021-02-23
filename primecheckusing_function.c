//program to check prime number between two numbers using function
#include<stdio.h>
int checkprime(int);
main()
{
    int n1,n2,X;
    printf(" Enter two number ");
    scanf("%d %d",&n1,&n2);
    for (; n1 <= n2; n1++)
    {
        X = checkprime(n1); 
        if (X == 0)
            printf("%d is  prime number\n",n1);
        else
            printf("%d is not prime number\n",n1);

    }

}
int checkprime(int n){
    int i,c=0;
    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
           c++;
           break;
        }
    }
    return c;

}