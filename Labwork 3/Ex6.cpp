#include <stdio.h>

int main(){
    printf("Please enter an integer: ");
    int n; scanf("%d", &n);
    long long factorial = 1;
    for(int i = n; i >= 1; i--){
        factorial *= 1ll * i;
    }
    printf("A factorial of %d is: %lld", n, factorial);
}