//Write a program to convert temperature. 1) F to C. 2) C to F.
// c/5 = (f-32)/9
// f = (9 * c) / 5 + 35   <-- C to F.
// c = (5 * f - 160) / 9   <-- F to C.

#include<stdio.h>
main()
{
    float c1,c2,f1,f2;
    printf("Enter temperature to convert C to F ");
    scanf("%f", &c1);
    f1 = (9 * c1) / 5 + 32;
    printf("%f\n",f1);
    printf("Enter temperature to convert F to C ");
    scanf("%f", &f2);
    c2 = (5 * f2 - 160) / 9;
    printf("%f",c2);


}