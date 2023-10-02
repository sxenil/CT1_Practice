#include<stdio.h>
#include<math.h>
int main(){

    float ang,sn,cs,tn,ct,sc,csc;

    printf ("Enter angle: ");
    scanf ("%f", &ang);

    sn= sin(ang);
    cs= cos(ang);
    tn= tan(ang);
   // ct= cot(ang);
   // sc= sec(ang);
   // csc= cosec(ang);

    printf ("Sin %f= %f", ang, sn);
    printf ("\nCos %f= %f", ang, cs);
    printf ("\nTan %f= %f", ang, tn);
    //printf ("Cot %f= %f", ang, ct);
    //printf ("Sec %f= %f", ang, sc);
    //printf ("Cosec %f= %f", ang, csc);

    return 0;
    
}