#include<stdio.h>
int main(){

    float r,g,b;
    float c,m,y,k,bl,wh;
    float max;

    printf ("Enter Red, Green, Blue values (0-255): ");
    scanf ("%f %f %f", &r, &g, &b);

    if (r==0 && g==0 && b==0){
        c=m=y=0;
        k=1;
    }

    else {
        r=r/255;
        g/255;
        b/255;

        max=r;
        if (g>max){
            max=g;
        }
        if (b>max){
            max=b;
        }

        wh= max;
        c= (wh-r/wh);
        m= (wh-g/wh);
        y= (wh-b/wh);
        k= 1-wh;
    }

    printf ("CMYK= %f %f %f %f", c, y, m, k);

    return 0;
}