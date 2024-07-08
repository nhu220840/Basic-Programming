#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Enter the number of values: ");
    int n; scanf("%d", &n);
    int *ptr = (int*)malloc(sizeof(int) * n);
    if(ptr == NULL){
        printf("Error!!!");
        return 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }
    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }
    return 0;
}