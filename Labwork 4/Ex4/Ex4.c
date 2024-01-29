#include <stdio.h>
#include "factorial.h"

int main(){
    printf("Please enter a positive integer number: ");
    int n; scanf("%d", &n);
    printf("The factorial of n is: %lld", factorial(n));
}