#include <stdio.h>

int main(){
    printf("Enter size of square: ");
    float n; scanf("%f", &n);
    float area = n * n;
    float circum = 4 * n;
    printf("Area = %f\n", area);
    printf("Circumference: %f", circum);

}