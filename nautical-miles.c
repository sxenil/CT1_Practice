#include<stdio.h>
#include<math.h>
int main(){

	float L1, L2, G1, G2, D;

	printf ("Enter L1 & L2: ");
	scanf ("%f %f", &L1, &L2);

	printf ("Enter G1 & G2: ");
	scanf ("%f %f", &G1, &G2);

	D= 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));

	printf ("Distance: %f nmi", D);

	return 0;

}