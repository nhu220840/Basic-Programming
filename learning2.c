#include <stdio.h>


int isEven(int x){
    if(x % 2 == 0)
        return 1;
    else 
        return 0;
}

int sum(int x, int y){
    // int sum = 0;
    // sum = x + y;
    // return sum;
    return x + y;
}

void hello(){
    printf("Hello world\n");
}

int main(){
    int n; scanf("%d", &n);
    int sum = 0;
    int i;
    for(i = 1; i <= n; i++)
        sum += i;
        //printf("hello\n");
    printf("%d\n", sum);

    if(n < 3){
        printf("You have no homework.\n");
        printf("Hello");
    }
    else 
        printf("You have homework\n");


    // while(n > 1){
    //     n /= 2;
    // }
    // if(n == 1) printf("%d is a power of 2\n", n);
    // else printf("%d is not a power of 2\n", n);
    // for(int i = 1; i <= n; i++){
    //     printf("%d ", i);
    // }
    // printf("\n");

    i = 1;
    while(i <= 5){
        printf("%d ", i);
        i++;
    }
    printf("\n");
    if(isEven(n) == 1) printf("It is even\n");
    else printf("It is odd\n");
    //printf("%d", sum(x, y));
    hello();
}