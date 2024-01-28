#include <stdio.h>
#include "GCD.h"

//Luu y: phai di den dung folder chua tat ca cac file do thi moi run duoc
//compile and run in terminal: 
// gcc Ex1.c GCD.c -o main
// ./main


int main(){
    printf("Please enter 2 positive integer numbers: ");
    int a, b; scanf("%d %d", &a, &b);
    printf("The greatest common divisor of %d and %d is: %d", a, b, gcd(a, b));
}