#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter the base of triangle: ");
    scanf("%f",&base);
    printf("Enter the height of triangle: ");
    scanf("%f",&height);
    area=0.5*base*height; // don't use 1/2 because 1/2 is integer division which give 0 answer.
    printf("The area of triangle is: %.2f",area);
    return 0;
}