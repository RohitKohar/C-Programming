#include<stdio.h>
void main()
{
    float x,y,sum,sub,divide,product;
    printf("Enter two numbers\n");
    scanf("%f%f",&x,&y);
    sum=x+y;
    sub=x-y;
    divide=x/y;
    product=x*y;
    printf("Sum is:%.2f, Sub is:%.2f, Divide is: %.2f, Product is: %.2f",sum,sub,divide,product);
}