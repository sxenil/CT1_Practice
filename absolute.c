#include<stdio.h>
int main (){
    int n;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    if (n<0){
        n=-1*n;
        printf ("The absolute value is: %d", n);
    }

    else {
        printf ("The absolute value is: %d", n);
    }

    return 0;

}