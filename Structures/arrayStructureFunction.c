// WAP to create a structure named student that has name, roll, marks and remarks as it members.Assume appropriate types and size of members.Use this structure to read and display records of four students.Create two function : one is to read information of students and another is to display the information on screen.Pass an array of the structure to above functions as their arguments.

#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
    char remarks[100];
};

void readStudents(struct student s[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter remarks: ");
        scanf(" %[^\n]", s[i].remarks);
    }
}

void displayStudents(struct student s[])
{
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name   : %s\n", s[i].name);
        printf("Marks  : %.2f\n", s[i].marks);
        printf("Remarks: %s\n", s[i].remarks);
    }
}

int main()
{
    struct student s[4];
    readStudents(s);
    displayStudents(s);
    return 0;
}
