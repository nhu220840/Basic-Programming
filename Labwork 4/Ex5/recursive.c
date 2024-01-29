#include <stdio.h>
#include <math.h>

long long recursive(int x, int n){
    if(n == 0) return 1;
    return x * (long long)pow(x, n - 1);
}
