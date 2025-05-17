// WAP to create a structure named date that has day, month and year as its members.Include this structure as a member in another structure named Employee which has name, id and salary as another members.Use this structure to read and display employee’s name, id, date of birth and salary.
#include <stdio.h>
struct Employee
{
    char name[30];
    int id;
    float salary;
    struct date
    {
        int day;
        int month;
        int year;
    } d;
};
int main()
{
    struct Employee e;
    printf("Enter the name of the employee: ");
    scanf("%s", e.name);
    printf("Enter the id of the employee: ");
    scanf("%d", &e.id);
    printf("Enter the salary of the employee: ");
    scanf("%f", &e.salary);
    printf("Enter the date of birth of the employee: ");
    scanf("%d-%d-%d", &e.d.day, &e.d.month, &e.d.year);

    printf("Displaying the details of the employee: \n");
    printf("The name of the employee is:%s\n", e.name);
    printf("The id of the employee is:%d\n", e.id);
    printf("The salary of the employee is: %.2f\n", e.salary);
    printf("The dob of the employee is: %d-%d-%d\n", e.d.day, e.d.month, e.d.year);
    return 0;
}