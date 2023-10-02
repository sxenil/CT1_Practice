#include<stdio.h>
int main(){

    int asciiValue = 0;

    while (asciiValue <= 255){
        printf("ASCII Value: %d, Character: %c\n", asciiValue, asciiValue);
        asciiValue++;
    }

    return 0;

}