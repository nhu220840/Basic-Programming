#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    printf("Enter 2 numbers: ");
    int a, b; scanf("%d %d", &a, &b);
    int (*ptr)(int, int);
    ptr = &add;
    printf("Sum of %d and %d is %d", a, b, (*ptr)(a, b));
}