// WAP to create a structure named books which has name, pages, and price as it members.Read name,
//     page number and price of a book using structure variable.Finally display record of book using pointer
//         to structure instead of structure itself to access member of variables.
#include <stdio.h>
#include <string.h>
struct books
{
    char name[30];
    int pages;
    float price;
};
int main()
{
    struct books *s1;
    printf("Enter the name: ");
    scanf("%s", s1->name);
    printf("Enter the no of pages: ");
    scanf("%d", &s1->pages);
    printf("Enter the price ");
    scanf("%f", &s1->price);

    printf("\n*****************\n");
    printf("The name is:%s\n", s1->name);
    printf("The no of pages are:%d\n", s1->pages);
    printf("The price is:%.2f\n", s1->price);
    return 0;
}