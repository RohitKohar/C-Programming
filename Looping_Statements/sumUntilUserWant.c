#include<stdio.h>
int main()
{
    int num1,num2,sum;
    char ch;
    do{
        printf("Enter two numbers: ");
        scanf("%d%d",&num1,&num2);
        sum=num1+num2;
        printf("The sum is: %d\n",sum);
        printf("Do you want to continue? If you want press y: ");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');
    return 0;
}