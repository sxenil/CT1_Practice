#include <stdio.h>
#include <math.h>
int main() {

    int ld, org_num, arm = 0;

    for (int i = 1; i <= 500; i++) {
        org_num = i;
        arm = 0; // Reset arm to 0 for each new number

        while (org_num > 0) {
            ld = org_num % 10;
            arm = pow(ld, 3) + arm;
            org_num = org_num / 10;
        }

        if (arm == i) {
            printf("%d is an Armstrong number\n", i);
        }
    }

    return 0;
    
}