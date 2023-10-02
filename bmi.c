#include<stdio.h>
int main(){

    float weight, height, bmi;

    printf ("Enter Weight(kgs): ");
    scanf ("%f", &weight);

    printf ("Enter Height(mts): ");
    scanf ("%f", &height);

    bmi= weight/(height*height);

    if (bmi<15){
        printf ("You are Mutthu");
    }

    else if (bmi>=15.1 && bmi<=17.5){
        printf ("You are Anorexic");
    }

    else if (bmi>=17.6 && bmi<=18.5){
        printf ("You are Underweight");
    }

    else if (bmi>=18.6 && bmi<=24.9){
        printf ("You are Ideal");
    }

    else if (bmi>=25 && bmi<=25.9){
        printf ("You are Overweight");
    }

    else if (bmi>=30 && bmi<=30.9){
        printf ("You are Obese");
    }

    else {
        printf ("You are Morbidly Obese");
    }

    return 0;

}