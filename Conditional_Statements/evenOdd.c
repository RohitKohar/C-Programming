#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("The number is even number.");
    else
        printf("The number is odd number.");
}