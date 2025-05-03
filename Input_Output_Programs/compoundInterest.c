#include<stdio.h>
#include<math.h>
void main()
{
    float principal,time,rate,CI;
    printf("Enter the principal: ");
    scanf("%f",&principal);
    printf("Enter the time in year: ");
    scanf("%f",&time);
    printf("Enter the rate in year: ");
    scanf("%f",&rate);
    CI=principal*(pow(1+(rate/100),time)-1);
    printf("The compound interest is: %.2f",CI);
}