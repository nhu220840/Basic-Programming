#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter 3 numbers: ");
    int num1, num2, num3; 
    scanf("%d %d %d", &num1, &num2, &num3);
    int max_number = fmax(fmax(num1, num2), num3);
    printf("The maximun number is: %d", max_number);
}