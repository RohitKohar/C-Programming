// WAP to find the number of and sum of all integers greater than n1 and less than n2
#include<stdio.h>
int main()
{
    int n1,n2,sum=0;
    printf("Enter value of n1 and n2: ");
    scanf("%d%d",&n1,&n2);
    for(int i=n1;i<=n2;i++)
    {
        sum=sum+i;
    }
    printf("The sum is:%d",sum);
    return 0;
}