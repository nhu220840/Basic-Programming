#include <stdio.h>

int main(){
    printf("Please enter a positive number: ");
    int n; scanf("%d", &n);
    long long product = 1;
    while(n){ // n != 0
        int r = n % 10;
        product *= r;
        n /= 10;
    }
    printf("A product of digits of the number is: %lld", product);
}