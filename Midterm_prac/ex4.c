#include <stdio.h>

int main(){
    printf("Enter number: ");
    int n; scanf("%d", &n);
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 1.0/i;
    }
    printf("Sum = %f", sum);
}