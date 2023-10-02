#include <stdio.h>
int main(){

    int num, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of positive numbers: %d", positiveCount);
    printf("\nCount of negative numbers: %d", negativeCount);
    printf("\nCount of zeros: %d", zeroCount);

    return 0;
    
}