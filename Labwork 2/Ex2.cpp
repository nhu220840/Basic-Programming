#include <stdio.h>
#include <math.h>

int main(){
    printf("Please enter 3 values: ");
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    //Method 1:
    int max = a, min = a;

    if(b > max) max = b;
    if(c > max) max = c;

    if(b < min) min = b;
    if(c < min) min = c;
    
    printf("The minimum among these numbers is: %d\n", min);
    printf("The maximum among these numbers is: %d\n", max);

    //Method 2:
    printf("The minimum among these numbers is: %d\n", (int)fmin(fmin(a, b), c));
    printf("The maximum among these numbers is: %d\n", (int)fmax(fmax(a, b), c));
}