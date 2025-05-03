#include <stdio.h>
int main() {
    float english, nepali, social, maths, computer, physics, chemistry, total, percentage;
    printf("Enter marks for subject 1: ");
    scanf("%f", &english);
    printf("Enter marks for subject 2: ");
    scanf("%f", &nepali);
    printf("Enter marks for subject 3: ");
    scanf("%f", &social);
    printf("Enter marks for subject 4: ");
    scanf("%f", &maths);
    printf("Enter marks for subject 5: ");
    scanf("%f", &computer);
    printf("Enter marks for subject 6: ");
    scanf("%f", &physics);
    printf("Enter marks for subject 7: ");
    scanf("%f", &chemistry);
    total = english + nepali + social + maths + computer + physics + chemistry;
    percentage = total / 7;
    printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 80) {
        printf("Distinction\n");
    } else if (percentage >= 60) {
        printf("First Division\n");
    } else if (percentage >= 45) {
        printf("Second Division\n");
    } else if (percentage >= 32) {
        printf("Third Division\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
