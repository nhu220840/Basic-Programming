#include <stdio.h>
#include <math.h>

int main(){
    printf("Please enter 3 value: ");
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    double value = 3 * a + pow(b, 3) + 2 * sqrt(c);
    printf("A value of the given expression is: %lf", value); 
}