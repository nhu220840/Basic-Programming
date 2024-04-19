#include <stdio.h>

int main(){
    printf("Enter a positive integer number: ");
    int n; scanf("%d", &n);
    long long factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("The factorial of %d is: %lld", n, factorial);
}