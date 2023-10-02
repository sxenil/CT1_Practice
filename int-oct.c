#include <stdio.h>

int main() {
    int num, octalNum = 0, base = 1;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Octal equivalent: Invalid input (negative number)\n");
    } else {
        // Convert decimal to octal
        while (num > 0) {
            octalNum += (num % 8) * base;
            num /= 8;
            base *= 10;
        }

        // Print octal equivalent
        printf("Octal equivalent: %d\n", octalNum);
    }

    return 0;
}
