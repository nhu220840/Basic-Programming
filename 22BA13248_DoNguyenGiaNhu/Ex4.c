#include <stdio.h>
#include "GCD.h"

//gcc Ex4.c GCD.c -o main
//./main

int main(){
    printf("Enter 2 positive integers number: ");
    int a, b; scanf("%d %d", &a, &b);
    printf("The Greatest Common Divisor of %d and %d is: %d", a, b, gcd(a, b));    
}