#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter a number: ");
    double x; scanf("%lf", &x);
    double res = 1 * pow(x, 2) + 2 * x + 1;
    printf("The result of equation is: %.2lf", res);
}