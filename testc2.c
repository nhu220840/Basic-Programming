#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int a[n + 1];
    for(int i = 0; i <= n; i++){
        a[i] = i;
    }
    int oddsum = 0, evensum = 0;
    for(int i = 0; i <= n; i++){
        if(a[i] % 2 == 0) 
            evensum += a[i];
        else 
            oddsum += a[i];
    }
    printf("%d %d", evensum, oddsum);
}