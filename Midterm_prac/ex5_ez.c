#include <stdio.h>

int main(){
    printf("Enter the number of values: ");
    int n; scanf("%d", &n);
    int cnt = 0;
    int a[100];
    while(n--){
        int x; scanf("%d", &x);
        if(x % 2 != 0){
            a[cnt] = x;
            cnt++;
        }
    }
    printf("All of the odd numbers: ");
    for(int i = 0; i < cnt; i++){
        printf("%d ", a[i]);
    }
}