#include <stdio.h>

int main(){
    printf("Enter the number of inches: ");
    float inch; scanf("%f", &inch);
    float cm = inch * 2.54;
    printf("%f inches = %f centimeter", inch, cm);
}