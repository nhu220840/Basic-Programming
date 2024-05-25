#include <stdio.h>

//Nhap vao n
//Tinh tong day: 1 + 1/2 + 1/3 + ... + 1/n

int main(){
    printf("Enter an integer: ");
    int n; scanf("%d", &n);
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (float)1/i;
    }
    printf("Sum = %f", sum);
}