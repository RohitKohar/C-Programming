#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in centigrade: ");
    scanf("%f",&c);
    f=(180*c/100)+32;
    printf("The temperature in fahrenheit is:%.2f",f);
    return 0;
}