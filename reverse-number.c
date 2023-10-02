#include<stdio.h>
int main (){

    int n,x,r=0;

    printf ("Enter a five digit number: ");
    scanf ("%d", &n);

    x=n;

    while (n>0){

        r=r*10;
        r=r+(n%10);
        n=n/10;

    }

    printf ("Reverse of the number is: %d\n", r);

    if (x==r){
        printf ("Original and reversed number are equal.");
    }

    else {
        printf ("Original and reversed number are not equal.");
    }

    return 0;

}