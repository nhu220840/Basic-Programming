#include <stdio.h>

int main(){
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("Factorial of %d is %d", n, factorial);
}