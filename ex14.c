#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter an integer: ");
    int n; scanf("%d", &n);
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("Factorial: %d", factorial);
}