#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("The sum of natural number is:%d",sum);
    return 0;
}