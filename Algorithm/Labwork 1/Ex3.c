#include <stdio.h>

int main(){
    printf("Enter 2 numbers: ");
    int a, b; scanf("%d %d", &a, &b);
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    printf("All odd numbers between %d and %d are: ", a, b);
    for(int i = a; i <= b; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }    
}