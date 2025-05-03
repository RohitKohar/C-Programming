#include<stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 == n2 || n1 == n3 || n2 == n3) {
        printf("Two or more numbers are equal.");
    }
    else if ((n1 > n2 && n1 < n3) || (n1 > n3 && n1 < n2)) {
        printf("%d is the middle number.", n1);
    }
    else if ((n2 > n1 && n2 < n3) || (n2 > n3 && n2 < n1)) {
        printf("%d is the middle number.", n2);
    }
    else {
        printf("%d is the middle number.", n3);
    }

    return 0;
}
