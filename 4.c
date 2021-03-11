//4. Write a program to calculate area of triangle.
//Area of triangle 
// s = (a + b + c)/2
// Area = sqrt(s * (s - a) * (s - b) * (s - c))

#include <math.h>
#include<stdio.h>

main()
{
    int a,b,c,s;
    float ar;

    printf("Enter three side of Triangle ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c)/2;
    ar = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%f",ar);

}