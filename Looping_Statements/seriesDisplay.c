// WAP to display the series: 1/2 2/3 3/4 4/5 …… n-1/n
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        printf("%d/%d\t",i-1,i);
    }
    return 0;
}