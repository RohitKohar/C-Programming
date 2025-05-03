#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the letter: ");
    scanf(" %c",&ch);
    if(ch>=65 && ch<=90)
    {
        ch=ch+32;
        printf("The lower case is: %c\n",ch);
    }
    else{
        ch=ch-32;
        printf("The upper case is: %c\n",ch);
    }
}