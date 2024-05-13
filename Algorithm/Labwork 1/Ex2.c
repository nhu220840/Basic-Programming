#include <stdio.h>

int main(){
    printf("Enter a positive integer number: ");
    int n; scanf("%d", &n);
    int product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    printf("The product of all positive integers smaller than or equal to %d is: %d", n, product);
}