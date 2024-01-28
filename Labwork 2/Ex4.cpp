#include <stdio.h>

int main(){
    printf("Please enter a year: ");
    int year; scanf("%d", &year);
    if(year % 100 == 0 || (year % 4 == 0 && year % 100 != 0)){
        printf("It is a leap year");
    }
    else printf("It is not a leap year");
}