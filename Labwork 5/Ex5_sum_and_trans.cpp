#include <stdio.h>

int main(){
    printf("Please enter the size of matrix: ");
    int n; scanf("%d", &n);
    int a[n][n];
    long long sum = 0;
    printf("Enter the elements of matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    //Sum:
    printf("The sum of all the matrix A's elements is: %lld\n\n", sum);

    //Transposed:
    //Method 1:
    printf("The transposed matrix of A is:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    //Method 2:
    // int b[n][n];
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         b[i][j] = a[j][i];
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         printf("%d ", b[i][j]);
    //     }
    //     printf("\n");
    // }
}