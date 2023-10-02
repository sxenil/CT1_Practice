#include <stdio.h>

int main() {
    int a, b, c;

    printf("Pythagorean Triplets with side lengths <= 30:\n");

    for (a = 1; a <= 30; a++) {
        for (b = a; b <= 30; b++) {
            for (c = b + 1; c <= 30; c++) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
