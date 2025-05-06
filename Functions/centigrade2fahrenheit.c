#include <stdio.h>
float C2F(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = C2F(celsius);
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);

    return 0;
}
