#include <stdio.h>

int main(){
    printf("Please enter the number of elements in the series: ");
    int n; scanf("%d", &n);
    printf("Please enter the series: ");
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    printf("The minimum in the given series is: %d\n", min);
    printf("The maximum in the given series is: %d\n", max);
}