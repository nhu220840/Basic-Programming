#include <stdio.h>

int main(){
    printf("Enter number: ");
    int n; scanf("%d", &n);
    if(n < 0){
        printf("Invalid value!!!");
        return 0;
    }
    printf("The factorial of %d is: ", n);
    if(n == 0){
        printf("1");
    }
    else{
        long long factorial = 1;
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
        printf("%lld", factorial);
    }
}