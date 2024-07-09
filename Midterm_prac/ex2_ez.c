#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter 3 numbers: ");
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    int min = a, max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    if(b < min) min = b;
    if(c < min) min = c;
    // printf("Minimum: %d\n", (int)fmin(a, fmin(b, c)));
    // printf("Maximum: %d", (int)fmax(a, fmax(b, c)));
    printf("Minimum: %d\n", min);
    printf("Maximum: %d", max);
}