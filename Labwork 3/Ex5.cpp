#include <stdio.h>

int main(){
    printf("Please enter an integer: ");
    long long n; scanf("%lld", &n);
    printf("Fibonacci series up to %d: ", n);
    if(n == 0) printf("0");
    else{
        printf("0 1 ");
        long long f2 = 0, f1 = 1, fn;
        for(int i = 2; i <= n; i++){
            fn = f2 + f1;
            if(fn <= n) 
                printf("%lld ", fn);
            else break; 
            //neu ko co else se co the xay ra tran so se in ra nhung so sai
            f2 = f1;
            f1 = fn;
        }
    }
}