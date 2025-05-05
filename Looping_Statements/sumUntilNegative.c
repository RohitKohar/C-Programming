// WAP a program to read a number from keyboard until a zero or negative number is keyed in.
// Finally, Calculate sum and average of entered numbers.
#include<stdio.h>
int main()
{
    int num,sum=0,count=0;
    float average=0.0;
    do{
        printf("Enter any numbers: ");
        scanf("%d",&num);
        if(num>0){
            sum=sum+num;
            count++;
        }   
    }while(num>0);
    average=(float)sum/count;
    printf("The sum is: %d and average is: %.2f",sum,average);
    return 0;
}