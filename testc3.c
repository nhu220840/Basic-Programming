#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *a, int n){
    for(int i = 1; i < n; i++){
        int pos = i - 1, value = a[i];
        while(pos >= 0 && a[pos] > value){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = value;
    }
}

int main(){
    int n; scanf("%d", &n);
    int *ptr = (int *)malloc(sizeof(int) * n);
    if(ptr == NULL){
        printf("Error");
        return 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i);        
    }
    
    insertionSort(ptr, n);
    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }

}