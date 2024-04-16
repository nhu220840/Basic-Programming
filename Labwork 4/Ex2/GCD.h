#include <stdio.h>

int gcd(int a, int b){
    if(b == 0) return a;
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}