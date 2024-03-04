#include <stdio.h>

int main(){
    printf("Please enter a temperature form Centigrade: ");
    double C; scanf("%lf", &C);
    double F = C * 9 / 5 + 32; //9/5 * C + 32 sai boi vi neu lay 9/5 ma ko ep kieu kqua se ra 1 so int 1.0 
    //nen sau do nhan voi C + 32 se lam sai lech kqua
    printf("A temperature form Fahrenheit is: %lf", F);
}