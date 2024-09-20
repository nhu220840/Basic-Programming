// 1 + 2 + 3 + 4 + ... + n
// 1*2*3*4*...*n
#include <stdio.h>

//1/1 + 1/2 + 1/3 + ... + 1/n
// if else for while
int main(){
    printf("Enter an integer: ");
    int n; scanf("%d", &n);
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 1.0/i;
    }
    printf("Sum = %f", sum);
}