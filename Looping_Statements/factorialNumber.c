#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The factorial is:%d",fact);
    return 0;
}