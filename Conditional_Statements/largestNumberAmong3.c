#include<stdio.h>
void main()  // it is good practice to use int main instead of void main
{
    int n1,n2,n3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
        printf("%d is the greatest number.",n1);
    else if(n2>n1 && n2>n3)
        printf("%d is the greatest number.",n2);
    else{
        printf("%d is the greatest number.",n3);
    }
}

// using nested if else

#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
            printf("%d is the greatest number.",n1);
        else   
            printf("%d is the greatest number.",n3);
    }
    else{
        if(n2>n3)
            printf("%d is the greatest number.",n2);
        else   
            printf("%d is the greatest number.",n3);
    }
}