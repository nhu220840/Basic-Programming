#include <stdio.h>

int main(){
    printf("Enter an integer: ");
    int n; scanf("%d", &n);
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (float)1/i;
    }
    printf("Sum = %f", sum);
}