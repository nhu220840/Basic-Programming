#include <stdio.h>

void addNumbers(double *numA, double *numB, double *result){
    *result = *numA + *numB;
}

int main(){
    printf("Please enter 2 numbers: ");
    double numA, numB, sum = 0;
    scanf("%lf %lf", &numA, &numB);

    addNumbers(&numA, &numB, &sum);
    printf("The addition of 2 numbers is: %.2lf", sum);

}