#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return (n)*fact(n-1);
    }
    
}
int main()
{
    int num,factorial;
    printf("Enter any number: ");
    scanf("%d",&num);
    factorial=fact(num);
    printf("The factorial is: %d",factorial);
}