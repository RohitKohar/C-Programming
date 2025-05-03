#include<stdio.h>
int main()
{
    float mathematics, chemistry, physics,total;
    printf("Enter the marks in mathematics: ");
    scanf("%f",&mathematics);
    printf("Enter the marks in chemistry: ");
    scanf("%f",&chemistry);
    printf("Enter the marks in physics: ");
    scanf("%f",&physics);
    total=mathematics+chemistry+physics;
    printf("Your total marks is: %.2f\n",total);
    if(mathematics>=60 && physics>=50 && chemistry>=40)
    {
      if(total>=200 || (mathematics+physics)>=150)
        {
            printf("You are eligible for the professional course.\n");
        }
        else{
            printf("Your total marks doesn't meet the criteria.\n");
        }
    }
    else{
        printf("You are not eligible.\n");
    }
    
    return 0;
}