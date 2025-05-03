#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
    float radius,area,volume;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area=4*PI*radius*radius;
    volume=(4.0/3.0)*PI*pow(radius,3);
    printf("The area is:%.2f\n",area);
    printf("The volume is:%.2f",volume);
}