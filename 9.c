//9. Write a program to calculate the roots of a quadratic equation.
//ax² + bx + c
// x = (-b ± sqrt(b²-4ac))/2a

#include<stdio.h>
#include<math.h>

main()
{
    int a, b, c,d;
    float x1 , x2;
    printf("Enter the Numbers ");
    scanf("%d %d %d",&a,&b,&c);
    d = b * b - 4 * a * c;
    if (d == 0)
     {
        x1 = -b / 2 * a;
        x2 = -b / 2 * a;
        printf("%d %d",x1,x2);
     }
    else if(d > 0)
    {
        x1 = (-b + sqrt(d))/2 * a;
        x2 = (-b - sqrt(d))/2 * a;
        printf("%d %d",x1,x2);
    }
    else
        printf("Imaginary Roots");

}
