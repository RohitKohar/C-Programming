#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number to check whether positive or negative number: ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("The number is positive.");
    }
    else if(number<0){
        printf("The number is negative.");
    }
    else{
        printf("The number is zero.");
    }
}