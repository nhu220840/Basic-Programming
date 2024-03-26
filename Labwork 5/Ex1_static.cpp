#include <stdio.h>

int main(){
    printf("Please enter the number of elements in the series: ");
    int n; scanf("%d", &n);
    printf("Please enter the series: ");
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max_element = a[0], min_element = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max_element)
            max_element = a[i];
        if(a[i] < min_element)
            min_element = a[i];
    }
    printf("The minimum in the given series is: %d\n", min_element);
    printf("The maximum in the given series is: %d\n", max_element);
}