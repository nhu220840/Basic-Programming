#include <stdio.h>
#include "Fx.h"
#include "Gxy.h"

int main(){
    printf("Please enter 2 integer numbers x and y: ");
    double x, y; scanf("%lf %lf", &x, &y);
    printf("f(x) = %.2lf\ng(x, y) = %.2lf", fx(x), gxy(x, y));
}