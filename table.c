#include<stdio.h>
int main(){

int n;
printf ("Input the value of n: ");
scanf ("%d", &n);

for (int i=1;i<=n;i=i+1){
    printf ("19 x %d = %d \n", i, i*19);
}

return 0;

}