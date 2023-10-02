#include<stdio.h>
int main(){
    int c, d, x;

    printf ("Enter first number: ");
    scanf ("%d", &c);

    printf ("Enter second number: ");
    scanf ("%d", &d);

    x=c;
    c=d;
    d=x;

    printf ("Value of c: %d & d: %d", c, d);

    return 0;
    
}