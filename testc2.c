#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter 3 numbers: ");
    float x, y, z; scanf("%f %f %f", &x, &y, &z);
    float min = fmin(fmin(x, y), z);
    float max = fmax(fmax(x, y), z);
    printf("Minimum number is: %.0f\nMaximum number is: %.0f", min, max);
}