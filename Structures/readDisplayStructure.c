// Create a structure named student that has name, roll, marks and remarks as members.Assume appropriate types and size of members.WAP using structure to read and display the entered by the user.
#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int roll;
    float marks;
    char remarks[30];
};
int main()
{
    struct student s1;
    printf("Enter the roll no: ");
    scanf("%d", &s1.roll);
    printf("Enter the name: ");
    scanf("%s", s1.name);
    printf("Enter the marks ");
    scanf("%f", &s1.marks);
    printf("Enter the remarks: ");
    scanf("%s", s1.remarks);

    printf("\n*****************\n");
    printf("The roll no is:%d\n", s1.roll);
    printf("The name is:%s\n", s1.name);
    printf("The marks is:%.2f\n", s1.marks);
    printf("The remarks is:%s\n", s1.remarks);
    return 0;
}