#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * 1000);
    int cnt = 0;
    if(n == 0){
        printf("0");
        return 0;
    }
    while(n){
        a[cnt] = n % 2;
        cnt++;
        n /= 2;
    }
    for(int i = cnt - 1; i >= 0; i--){
        printf("%d", a[i]);
    }
}