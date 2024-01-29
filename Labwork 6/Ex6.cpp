#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    int (*ptr)(int, int);
    ptr = &add;
    int result = (*ptr)(3, 5);
    printf("Result of addition: %d\n", result);
}