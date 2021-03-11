//10. Write a program to calculate the distance between 2 points in a 2D coordinate system.
//distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
#include<stdio.h>
#include<math.h>
main()
{
    float x1,x2,y1,y2,d;
    printf("Enter 1st Point ");
    scanf("%d %d",&x1, &y1);
    printf("Enter 2nd Point ");
    scanf("%d %d",&x2, &y2);
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%f",d);

}
