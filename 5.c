//5. Write a program to swap 2 numbers - 1) With 3rd Variable. 2) Without 3rd variable.
#include<stdio.h>

main()
{
    int a,b,c,ch;
    printf("Press 1 to swap two numbers with third variable \n");
    printf("Press 2 to swap two numbers without third variable \n");
    printf("Enter your choice ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter two number ");
        scanf("%d %d",&a,&b);
        c = a;
        a = b;
        b = c;
        printf("%d %d",a,b);
        break;
    case 2:
        printf("Enter two number ");
        scanf("%d %d",&a,&b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("%d %d",a,b);
        break;
    default:
    printf("Invalid option");
        break;
    }
}