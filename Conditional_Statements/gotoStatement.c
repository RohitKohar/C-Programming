#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        goto vote;
    }
    else{
        goto noVote;
    }
    vote:
        printf("You are eligible for voting.");  
        return 0;                       // written return 0 to terminate the goto statement when condition met 
                                        // if I don't write then both will be printing.
    noVote:
        printf("You are not eligible for voting.");
        return 0;
    return 0;
}