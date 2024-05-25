#include <stdio.h>

int main(){
    int a[5];
    printf("Enter 5 elements: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    int *last_element = a + 4;
    printf("Last element: %d\n", *last_element);
    int *ptr = a;
    printf("All the elements from the last to the first: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ", *(ptr + i));
    }
}