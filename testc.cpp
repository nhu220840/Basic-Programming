#include <stdio.h>

int main(){
    long long n; scanf("%lld", &n);
    int cnt = 0;
    while(n){
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7) cnt++;
        n /= 10;
    }
    printf("%d", cnt);
}