#include <stdio.h>

int main(){
    printf("Please enter the number of elements in the array: ");
    int n; scanf("%d", &n);
    int a[n];
    long long sum = 0;
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("The sum of all the array elements is: %lld", sum);
}