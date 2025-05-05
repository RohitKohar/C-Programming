#include<stdio.h>
int main()
{
    int num,sum=0,rem,rev=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    int n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==n){
        printf("The number %d is palindrome.",n);
    }
    else{
        printf("The number %d is not palindrome.",n);
    }
    return 0; 
}