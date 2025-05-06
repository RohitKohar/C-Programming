#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n1,n2;
    printf("Enter any two numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("Before swap: the a and b are: %d %d \n",n1,n2);
    swap(&n1,&n2);
    printf("After swap: the a and b are: %d %d \n",n1,n2);
    return 0;
}