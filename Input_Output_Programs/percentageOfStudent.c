#include<stdio.h>
void main()
{
    float english,nepali,social,physics,chemistry,percent,total;
    printf("Enter the marks of english subject: ");
    scanf("%f",&english);
    printf("Enter the marks of nepali subject: ");
    scanf("%f",&nepali);
    printf("Enter the marks of social subject: ");
    scanf("%f",&social);
    printf("Enter the marks of physics subject: ");
    scanf("%f",&physics);
    printf("Enter the marks of chemistry subject: ");
    scanf("%f",&chemistry);
    printf("Enter the total marks: ");
    scanf("%f",&total);
    percent=(english+nepali+social+physics+chemistry)*100/total;
    printf("The percentage is: %.2f",total);
}