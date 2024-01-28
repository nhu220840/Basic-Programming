#include <stdio.h>

int main(){
    printf("Please enter 2 integers: ");
    int a, b; scanf("%d %d", &a, &b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("The values of 2 variables after being swapped are: %d %d", a, b);
}