#include <stdio.h>

//Nhap vao do dai 1 canh in ra chu vi hinh vuong

int main(){
    printf("Enter a size of square: ");
    float size; scanf("%f", &size);
    float circumference = 4 * size;
    printf("Circumference of square is: %f", circumference);
}