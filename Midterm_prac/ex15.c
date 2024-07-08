#include <stdio.h>

void dp(int n){
    if(n != 0){
        dp(n / 2);
        printf("%d", n % 2);
    }
}

int main(){
    printf("Enter integer: ");
    int n; scanf("%d", &n);
    printf("Convert to binary number: ");
    if(n == 0){
        printf("0");
        return 0;
    }
    dp(n);
}