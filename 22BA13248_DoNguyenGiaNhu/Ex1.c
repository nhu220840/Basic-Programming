#include <stdio.h>
#include <math.h>

const float PI = 3.14;

int main(){
    printf("Enter ");
    float r; scanf("%f", &r);
    printf("%f", r);
    float A = PI * pow(r, 2);
    float C = PI * 2 * r;
    printf("The area and the circumference are: %.2f %.3f", A, C);
}