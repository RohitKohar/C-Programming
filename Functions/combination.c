#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n,r,combination;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    combination=factorial(n)/(factorial(n-r)*factorial(r));
    printf("The combination is: %d",combination);
    return 0;
}