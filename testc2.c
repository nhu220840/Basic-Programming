#include <stdio.h>
#define ull unsigned long long

ull F[501];

void Fibo(){
    F[0] = 0, F[1] = 1;
    for(int i = 2; i <= 500; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

int main(){
    Fibo();
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        printf("%llu\n", F[n]);
    }
}