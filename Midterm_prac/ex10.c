#include <stdio.h>

int main(){
    int a[5];
    printf("Enter value of 5 integers: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    int *ptr = a;
    printf("Last element: %d\n", *(ptr + 4));
    printf("All numbers from the last to the first: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ", *(ptr + i));
    }
}