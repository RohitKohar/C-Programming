#include <stdio.h>

int greater(int a, int b) {
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}

int main() {
    int num1, num2, num3, greatest;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    greatest = greater(num1, greater(num2, num3));
    printf("The greatest number is: %d\n", greatest);
    return 0;
}
