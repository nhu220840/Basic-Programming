#include <stdio.h>


int main(){
    printf("Enter 5 integers: ");
    int a[5];
    for(int i = 0; i < 5; i++){
        int x; scanf("%d", &x);
        a[i] = x;
    }
    int max = -1e9, min = 1e9;
    for(int i = 0; i < 5; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("Min = %d\n", min);
    printf("Max = %d", max);
}