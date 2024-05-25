#include <stdio.h>

int main(){
    printf("Enter a size of square: ");
    float size; scanf("%f", &size);
    float circumference = 4 * size;
    printf("Circumference of square is: %f", circumference);
}