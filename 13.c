//Write a program to calculate addition, subtraction, multiplication, division and modulo operation using switch statement.
#include<stdio.h>

main()
{
    int a, b, c, ch;
    float d;
    printf("Press 1 for Addition \n");
    printf("Press 2 for Subtraction \n");
    printf("Press 3 for Multiplication \n");
    printf("Press 4 for Division \n");
    printf("Press 5 for Modulo \n");
    printf("Enter your choice ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            printf("Enter two Numbers ");
            scanf("%d %d",&a,&b);
            c = a + b;
            printf("%d",c);
            break;
        case 2:
            printf("Enter two Numbers ");
            scanf("%d %d",&a,&b);
            c = a - b;
            printf("%d",c);
            break;
        case 3:
            printf("Enter two Numbers ");
            scanf("%d %d",&a,&b);
            c = a * b;
            printf("%d",c);
            break;
        case 4:
            printf("Enter two Numbers ");
            scanf("%d %d",&a,&b);
            d = a / b;
            printf("%f",d);
            break;
        case 5:
            printf("Enter two Numbers ");
            scanf("%d %d",&a,&b);
            c = a % b;
            printf("%d",c);
            break;
        default:
            printf("Invalid Option");
            break;
    }

}