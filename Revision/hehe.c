#include <stdio.h>
#include <stdlib.h>

void hello(){
    printf("Hello world\n");
}

int sum(int a, int b){
    int c = a + b;
    return c;
}

int isEven(int n){
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

void increase(int x){
    x += 20;
}

void myFunction(int a[], int n){
    for(int i = 0; i < n; i++){
        a[i]++;
    }
}

int *myFunction2(int a[], int n){
    for(int i = 0; i < n; i++){
        a[i]++;
    }
    return a;
}

int main(){
    // printf("hello world\n");
    int n;
    scanf("%d", &n);
    int a[n];
    //printf("%d\n", n);
    // int sum = 0;
    // for (int i = 1; i <= n; i++){
    //     sum += i;
    // }
    // printf("%d\n", sum);
    hello();
    printf("%d\n", sum(2, 2));
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(isEven(a[i]) == 0){
            printf("i = %d, is even\n", a[i]);
        }
        else printf("%d is odd\n", a[i]);
    }
    
    int arr0[6] = {1, 2, 3};
    printf("%d\n", arr0[1]);
    for(int i = 0; i < 6; i++){
        printf("%d ", arr0[i]);
    }
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("%d\n", arr2[1][1]);
    //myFunction(arr, 6);
    for(int i = 0; i < 6; i++){
        printf("%d ", arr0[i]);
    }
    printf("\n");
    increase(n);
    printf("%d\n", n);
    //char kitu; scanf("%c", &kitu);
    char name[100];
    scanf("%s", name);
    printf("%s\n", name);

    int arr[6] = {1, 4, 3, 5, 20, 100};
    int *p = arr;
    printf("%d\n", arr[2]);
    printf("%d\n", *(arr + 2));
    // for(int i = 0; i < n; i++){
    //     //scanf("%d", &a[i]);
    //     scanf("%d", a + i);
    // }

    //for(int i = 0; i < n; i++) printf("%d ", *(a + i));
    printf("\n");
    p++;
    printf("%d\n", *p + 1);
    printf("%d\n", *(p + 1));

    int *b = (int *)malloc(n * sizeof(int));
}