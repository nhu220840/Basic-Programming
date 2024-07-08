#include <stdio.h>

int main(){
    printf("Please enter a natural number: ");
    int n; scanf("%d", &n);
    printf("All the divisors of %d are: ", n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
            if(i != n) printf(",");
        }
    }
}