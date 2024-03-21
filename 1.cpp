#include <stdio.h>

int main(){
    int a, b, k; scanf("%d %d %d", &a, &b, &k);
    int left_step = 0, right_step = 0;
    if(k % 2 == 0){
        left_step = k / 2;
        right_step = k / 2;
    }
    else{
        left_step = (k - 1) / 2;
        right_step = k - left_step;
    }
    printf("%lld", 1ll * right_step * a - 1ll * left_step * b);
}