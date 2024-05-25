#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter 3 numbers: ");
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    float value = pow(a, 3) - 3 * b + 2 * sqrt(c);
    printf("Value = %f", value); 
}