#include <stdio.h> 
#include "GCD.h"

int main(){
    printf("Please enter 4 positive integer numbers: ");
    int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("The greatest common divisor of these number is: %d", gcd(gcd(a, b), gcd(c, d)));
}