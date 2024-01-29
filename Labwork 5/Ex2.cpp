#include <stdio.h>

int main(){
    printf("Please enter a positive integer number: ");
    int n; scanf("%d", &n);
    int sum_even = 0, sum_odd = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) sum_even += i;
        else sum_odd += i;
    }
    printf("The sum of even from 1 to %d is: %d\n", n, sum_even);
    printf("The sum of odd from 1 to %d is: %d", n, sum_odd);
}