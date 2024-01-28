#include <stdio.h>

int main(){
    printf("Please enter a temperature form Centigrade: ");
    double C; scanf("%lf", &C);
    double F = 9 / 5 * C + 32;
    printf("A temperature form Fahrenheigh is: %lf", F);
}