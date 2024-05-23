#include <stdio.h>
#include "GCD.h"

int main(){ 
    int a, b; scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is: %d %d", a, b, gcd(a, b), lcm(a, b));
}