#include <stdio.h>

int main(){
    printf("Please enter the size of matrix: ");
    int n; scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}