#include <stdio.h>
int main() {
    int num, digit, divisor = 10000; 
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    if (num >= 10000 && num <= 99999) { 
        for (int i = 0; i < 5; i++) {
            digit = num / divisor;
            num = num % divisor;
            divisor = divisor / 10;
            switch (digit) {
                case 0: printf("Zero "); break;
                case 1: printf("One "); break;
                case 2: printf("Two "); break;
                case 3: printf("Three "); break;
                case 4: printf("Four "); break;
                case 5: printf("Five "); break;
                case 6: printf("Six "); break;
                case 7: printf("Seven "); break;
                case 8: printf("Eight "); break;
                case 9: printf("Nine "); break;
            }
        }
    } else {
        printf("Please enter a 5-digit number.");
    }
    return 0;
}
