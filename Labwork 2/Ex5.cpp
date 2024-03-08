#include <stdio.h>

int main(){
    printf("Please enter 6 integers: ");
    int a, b, c, d, e, f; scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    float D, Dx, Dy, x, y;
    D = a * e - b * d;
    Dx = c * e - f * b;
    Dy = a * f - d * c;
    if (D == 0){
        if (Dx + Dy == 0)
            printf("The given system has infinitely many solutions");
        else
            printf("The given system has no solution");
    }
    else{
        x = Dx / D;
        y = Dy / D;
        printf("The given system has unique solution form (x, y) = (%f, %f)", x, y);
    }
}