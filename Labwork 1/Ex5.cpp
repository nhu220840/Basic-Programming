#include <stdio.h>

int main(){
    printf("Please enter a value of x: ");
    int x; scanf("%d", &x);
    int value = x * x + 2 * x + 1;
    printf("A value of a polynomial is: %d", value);
}