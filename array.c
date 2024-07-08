#include <stdio.h>

int dq(int n){
    if(n != 0){
        dq(n / 2);
        printf("%d", n % 2);
    }
}

int main(){
    int n; scanf("%d", &n);
    int cnt = 0;
    int rev[20];
    while(n != 0){
        rev[cnt] = n % 2;
        cnt++;
        n /= 2;
    }
    for(int i = cnt - 1; i >= 0; i--){
        printf("%d", rev[i]);
    }
}