#include <stdio.h>

int main(){
    printf("Please enter an integer number: ");
    int n; scanf("%d", &n);
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    printf("The sum of a series is: %.2lf", sum);
}