#include <stdio.h>


long long largetNum()

int main(){
    printf("Please enter number:");
    int n;
    scanf("%d",&n);
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=(float)1/i;
    }
    printf("sum=%lf",sum);
}