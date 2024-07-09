#include <stdio.h>

int main(){
    printf("Enter the value of inches: ");
    float inch; scanf("%f", &inch);
    // float cm = 2.54 * inch;
    printf("Centimeter: %f", 2.54 * inch);
}