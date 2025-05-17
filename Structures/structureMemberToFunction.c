// WAP to illustrate passing structure members to a function.
#include <stdio.h>
void studentDetails(char name[30],int roll, float marks, char remarks[30]){
    printf("\n*****************\n");
    printf("The roll no is:%d\n", roll);
    printf("The name is:%s\n", name);
    printf("The marks is:%.2f\n", marks);
    printf("The remarks is:%s\n", remarks);
}
struct student
{
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
    studentDetails(s1.name,s1.roll,s1.marks,s1.remarks);
    return 0;
}