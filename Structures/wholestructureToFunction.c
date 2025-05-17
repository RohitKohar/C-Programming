// WAP to illustrate passing whole structure to a function.
#include <stdio.h>
struct Student
{
    int roll;
    char name[30];
    float marks;
};

void displayDetails(struct Student s)
{
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    displayDetails(s1);
    return 0;
}
