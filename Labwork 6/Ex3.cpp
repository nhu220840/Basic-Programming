#include <stdio.h>

int main(){
    printf("Please enter the number of elements in the array: ");
    int n; scanf("%d", &n);
    int a[n];
    int *ptr = a;
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i); 
    }
    printf("The array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }
}