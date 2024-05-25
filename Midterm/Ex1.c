#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter 3 numbers: ");
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    int min = fmin(fmin(a, b), c);
    int max = fmax(fmax(a, b), c);
    printf("Min = %d\n", min);
    printf("Max = %d", max);
}