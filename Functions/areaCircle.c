#include <stdio.h>
#define PI 3.1416 
float area(float radius) {
    return PI * radius * radius;
}
int main() {
    float r1, r2, area1, area2;
    printf("Enter radius of first circle: ");
    scanf("%f", &r1);
    printf("Enter radius of second circle: ");
    scanf("%f", &r2);
    area1 = area(r1);
    area2 = area(r2);
    printf("Area of first circle: %.2f\n", area1);
    printf("Area of second circle: %.2f\n", area2);
    return 0;
}
