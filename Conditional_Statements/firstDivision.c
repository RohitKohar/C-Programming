// Write a program to read percentage of marks obtained by a student in SLC and +2 level. Display
// message “Congratulations!!! You have first division in both SEE and +2” if both levels have
// percentage greater than or equal to 60.
#include<stdio.h>
void main()
{
    float SEE, Twelve;
    printf("Enter the percentage of class 10: ");
    scanf("%f",&SEE);
    printf("Enter the percentaage of class twelve: ");
    scanf("%f",&Twelve);
    if(SEE>=60 && Twelve>=60)
        printf("Congratulations!!! You have first division in both SEE and +2.");
    else
        printf("You don't have first division in both SEE and +2.");
}