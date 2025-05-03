#include<stdio.h>
#define PI 3.14
void main()
{
    float r,area;
    printf("Enter the radius: ");
    scanf("%f",&r);
    area=PI*r*r;
    printf("Area is: %.2f",area);
}