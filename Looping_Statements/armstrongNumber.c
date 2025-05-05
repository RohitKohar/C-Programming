#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,n,sum=0;
    printf("Enter any 3 digits number: ");
    scanf("%d",&num);
    n=num;  // here n is the temporary variable to store the value of num.
    while(num!=0)
    {
        rem = num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    if(sum==n)
    {
        printf("%d is armstrong number.\n",n);
    }
    else{
        printf("%d is not armstrong number.\n",n);
    }
    return 0;
}