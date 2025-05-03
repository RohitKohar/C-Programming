// WAP to read a positive number from user and check whether the number is within
// range of 1-100, 101-200, 201-300, or greater than 400.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>=1 && num<=100)
    {
        printf("The number is between 1 to 100.\n");
    }
    else if(num>=101 && num<=200)
    {
        printf("The number is between 101 to 200.\n");
    }
    else if(num>=201 && num<=300)
    {
        printf("The number is between 201 to 300.\n");
    }
    else if(num>=301 && num<=400)
    {
        printf("The number is between 301 to 400.\n");
    }
    else{
        printf("The number is greater than 400.");
    }
    return 0;
}
