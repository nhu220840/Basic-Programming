#include <stdio.h>

long long normal(int x, int n){
    long long fx = 1;
    for(int i = 1; i <= n; i++){
        fx *= 1ll * x;
    }
    return fx;
}
