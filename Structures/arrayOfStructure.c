// WAP to create a structure named student that has name, roll, marks and remarks as members.Assume appropriate types and size of members.Use this structure to read and display records of 5 students.
#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int roll;
    float marks;
    char remarks[30];
};
int main()
{
    struct student s1[5];
    for (int i = 0; i < 5;i++){
        printf("Enter Details of student %d\n", i + 1);
        printf("Enter the roll no: ");
        scanf("%d", &s1[i].roll);
        printf("Enter the name: ");
        scanf("%s", s1[i].name);
        printf("Enter the marks ");
        scanf("%f", &s1[i].marks);
        printf("Enter the remarks: ");
        scanf("%s", s1[i].remarks);
    }
    printf("\n*****************\n");
    for (int i = 0; i < 5;i++){ 
        printf("The roll no is:%d\n", s1[i].roll);
        printf("The name is:%s\n", s1[i].name);
        printf("The marks is:%.2f\n", s1[i].marks);
        printf("The remarks is:%s\n", s1[i].remarks);
    }
    printf("End of the program.\n");
    return 0;
}