#include <stdio.h>

void insertionSort(int a[], int n){
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
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}