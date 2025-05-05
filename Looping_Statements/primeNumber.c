#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<2)
    {
        printf("The number is not prime number.\n");
    }
    else{
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                count=1;
                break;
            }
        }
    if(count==1)
    {
        printf("The number %d is not prime number.",num);
    }
    else{
        printf("The number %d is prime number.",num);
    }
    }
    
}