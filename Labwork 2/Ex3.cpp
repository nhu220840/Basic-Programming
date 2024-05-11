#include <stdio.h>

int main(){
    printf("Please enter 2 integers: ");
    int a, b; scanf("%d %d", &a, &b);
    //a = 1, b = 2
    a = a + b;
    //a = 3
    b = a - b;
    //b = 3 - 2 = 1
    a = a - b;
    //a = 3 - 1 = 2;
    printf("The values of 2 variables after being swapped are: %d %d", a, b);
}