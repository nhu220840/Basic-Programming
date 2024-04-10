#include <stdio.h>
#include <string.h>

// float average(int a, int b);

// float average(int a, int b){
//     float avr = 0;
//     avr = ((float)a + b) / 2;
//     return avr;
//     //return (a + b) / 2;
// }



int main(){
    // int A, B; 
    // scanf("%d %d", &A, &B);
    // printf("The average is: %f", average(A, B));
    // char mySchool[100] = "USTH";
    // char S2[100] = "Hello";
    // printf("%s\n", mySchool);
    // printf("%c\n", mySchool[0]);
    // printf("%d\n", strlen(mySchool));
    // strcat(S2, mySchool);
    // printf("%s\n%s", mySchool, S2);

    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= n; i++){
        printf("%d ", a[i]);
    }
}

// float average(int a, int b){
//     float avr = 0;
//     avr = ((float)a + b) / 2;
//     return avr;
//     //return (a + b) / 2;
// }
