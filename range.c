#include <stdio.h>

int main() {
    int n, num, smallest, largest;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of values.\n");
        return 1;
    }

    printf("Enter value 1: ");
    scanf("%d", &num);
    smallest = largest = num;

    for (int i = 2; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &num);
        smallest = (num < smallest) ? num : smallest;
        largest = (num > largest) ? num : largest;
    }

    printf("The range is: %d\n", largest - smallest);

    return 0;
}