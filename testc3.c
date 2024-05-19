#include <stdio.h>
#include <math.h>
#define ll long long

ll countDivisor(int n){
    ll cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            if(i != n / i){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        ll count_sum_divisor = 0;
        int l, r; scanf("%d %d", &l, &r);
        for(int i = l; i <= r; i++){
            count_sum_divisor += countDivisor(i);
        }
        printf("%lld\n", count_sum_divisor);
    }
}