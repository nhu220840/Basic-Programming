#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    printf("Please enter 2 numbers: ");
    //int *a, *b; scanf("%d %d", a, b);
    int a, b; scanf("%d %d", &a, &b);
    printf("After being swapped: ");

    //Method 1:
    // int tmp = *a;
    // *a = *b;
    // *b = tmp;
    // printf("%d %d", *a, *b);

    //Method 2:
    swap(&a, &b);
    printf("%d %d", a, b);
}