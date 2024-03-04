#include <stdio.h>

int main(){
    printf("Please enter a temperature form Centigrade: ");
    double C; scanf("%lf", &C);
    double F = C * 9 / 5 + 32;
    printf("A temperature form Fahrenheit is: %lf", F);
}