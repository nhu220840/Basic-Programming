#include <stdio.h>
#include <math.h>
int main(){
    long long m, n;
    scanf("%lld %lld", &m, &n);
    if(m % 2 == 0){
        long long hcn_chan = ((m / 2) * n);
        printf("%lld", hcn_chan);
    }
    else{
        if(n % 2 == 0){
            long long hcn_le1 = (((m -1) / 2) * n); 
        printf("%lld", hcn_le1);
        }
        else{
            long long hcn_le2 = (m * (n / 2) + 1);
            printf("%lld", hcn_le2); 
        }
    }
    return 0;
}
