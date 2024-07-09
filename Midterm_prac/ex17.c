#include <stdio.h>

#define ll long long

ll F[92];

void Fibo(){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

int main(){
    Fibo();
    printf("Enter an integers: ");
    int n; scanf("%d", &n);
    printf("All of the Fibonacci numbers are less than %d: ", n);
    for(int i = 0; i <= 92; i++){
        if(F[i] > n){
            break;
        }
        printf("%lld ", F[i]);
    }
    printf("\n");
    printf("The %dth Fibonacci number is: %lld", n, F[n - 1]);
}