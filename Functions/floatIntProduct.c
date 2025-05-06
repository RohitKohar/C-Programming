#include <stdio.h>

float product(float x, int y) {
    return x * y;
}

int main() {
    float num1, result;
    int num2;

    printf("Enter a float number: ");
    scanf("%f", &num1);

    printf("Enter an int number: ");
    scanf("%d", &num2);

    result = product(num1, num2);

    printf("The output is: %.2f\n", result);
    return 0;
}
