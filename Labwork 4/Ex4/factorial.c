#include <stdio.h>

long long factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n - 1);
}

long long factorial2(int n){
    long long factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}