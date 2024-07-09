#include <stdio.h>
#include "GCD.h"

int main(){
    printf("Enter 2 integers: ");
    int a, b; scanf("%d %d", &a, &b);
    printf("Greatest common divisor of %d and %d is: %d", a, b, gcd(a, b));
}