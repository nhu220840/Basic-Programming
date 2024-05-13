#include <stdio.h>

int main(){
    printf("Enter a positive integer: ");
    int n; scanf("%d", &n);
    int countOdd = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            countOdd++;
        }
    }
    printf("There are %d odd numbers from 1 to n", countOdd);
}