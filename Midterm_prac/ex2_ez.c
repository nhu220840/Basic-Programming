#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter 3 numbers: ");
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    printf("Minimum: %d\n", (int)fmin(a, fmin(b, c)));
    printf("Maximunm: %d", (int)fmax(a, fmax(b, c)));
}