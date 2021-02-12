/* 8. Write a program to take basic salary of an employee. 
DA is 15% of basic salary, 
HRA is 13% of Basic Salary,
TA is 10% of basic salary. 

Calculate gross salary. (bs + da + hra + ta)
*/

#include<stdio.h>

main()
{
    float bs, da, hra, ta, gs;
    printf("Enter Basic Salary ");
    scanf("%f",&bs);
    da = bs * 0.15;
    hra = bs * 0.13;
    ta = bs * 0.10;
    gs = bs + da + hra + ta;
    printf("%f",gs);


}
