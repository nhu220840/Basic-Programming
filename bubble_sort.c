#include <stdio.h>

void bubbleSort(int a[], int n){
    for(int i = 0; i < n - 1; i ++){
        for(int j = n - 1; j > i; j--){
            if(a[j] > a[j - 1]){
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
}

void selectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        int tmp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = tmp;
    }
}

void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int pos = i - 1, value = a[i];
        while(pos >= 0 && a[pos] >= value){
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
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
}