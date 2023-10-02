#include<stdio.h>
int main(){

    int year, day;

    printf("Enter a year: ");
    scanf("%d", &year);

    day = (1 + year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;

    char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    printf("On January 1st of %d, it was a %s.\n", year, days[day]);

    return 0;

}