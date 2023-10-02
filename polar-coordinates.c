#include<stdio.h>
#include<math.h>
int main() {

    float x,y,r,psi;

    printf ("Enter x: ");
    scanf ("%f", &x);

    printf ("Enter y: ");
    scanf ("%f", &y);

    r= sqrt(pow(x,2)+pow(y,2));
    psi= atan(y/x);

    printf ("The polar coordinates are: %f & %f", r, psi);

    return 0;
    
}