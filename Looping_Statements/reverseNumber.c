#include<stdio.h>
int main()
{
    int num,sum=0,rem,rev=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("The reverse number is: %d",rev);
}