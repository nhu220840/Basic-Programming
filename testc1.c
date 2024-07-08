#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d", &n);
    int *ptr = (int *)malloc(sizeof(int) * n);
    if(ptr == NULL){
        printf("Error!");
        return 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i);
    }

    int max = *ptr, min = *ptr;
    for(int i = 0; i < n; i++){
        if(*(ptr + i) > max)
            max = *(ptr + i);
        if(*(ptr + i) < min)
            min = *(ptr + i);
    }
    printf("Min = %d\nMax = %d\n", min, max);

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += *(ptr + i);
    }
    float avr = (float)sum / n;
    printf("Average: %f", avr);
}