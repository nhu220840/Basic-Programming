#include <stdio.h>
#include "normal.h"
#include "recursive.h"

int main(){
    printf("Please enter 2 integer numbers x and n: ");
    int x, n; scanf("%d %d", &x, &n);
    printf("The value of x^n calculate by normal function is: %lld\n", normal(x, n));
    printf("The value of x^n calculate by recursive function is: %lld", recursive(x, n));
}