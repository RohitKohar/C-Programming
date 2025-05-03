#include<stdio.h>
int main()
{
    float n1,n2;
    char operator;
    printf("Enter the first number: ");
    scanf("%f",&n1);
    printf("Enter hte second number: ");
    scanf("%f",&n2);
    printf("Enter the operator: ");
    scanf(" %c",&operator); // Be aware, I have used a whitespace before the %c.
    switch (operator)
    {
    case '+':
        printf("The sum is: %.2f",n1+n2);
        break;
    case '-':
        printf("The subtraction is: %.2f",n1-n2);
        break;
    case '*':
        printf("The multiplication is: %.2f",n1*n2);
        break;
    case '/':
        if(n2!=0)
        {
            printf("The division is: %.2f",n1/n2);
        }
        else{
            printf("The number cannot be divided by zero.");
        }
        break; 
    default:
        break;
    }
    return 0;
}