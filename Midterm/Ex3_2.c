#include <stdio.h>

//nhap 1 ma tran
//In ra ma tran chuyen vi cua no (transpose matrix)

int main(){
    printf("Enter the dimension of matrix: ");
    int n, m; scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter the matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose matrix:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}