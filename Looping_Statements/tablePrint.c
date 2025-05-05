#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n********\n");
    }
    return 0;
}