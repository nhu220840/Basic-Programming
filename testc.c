#include <stdio.h>
#include <string.h>

int main(){
    int n; scanf("%d", &n);
    switch (n + 2){
        case 1 : printf("Sunday"); break;
        case 2 : printf("Monday"); break;
        default: printf("Not a day in week\n"); break;
    }

    //int a = 40, b = 4;
    // while(a != b)
    // if(a > b) a = a - b;
    // //else b = b - a;
    // printf("%d\n", a);

    // int result = 0;
    // int i = 0;
    // for(; i <= 5; i++){
    //     result += i;
    // }
    // printf("%d\n", result);
    int a[5] = {1, 2, 3}; //0 1 2 3 4 
    printf("%d\n", a[0]);
    printf("%d\n", a[2]);
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%d\n", arr[1][1]);
    //string
    printf("This\'s our C programming course.\n");
    printf("This\'s our C programming course.\n");

    char arr2[100] = "H ello USTH";
    printf("%d\n", strlen(arr2));

    // n = 5
    // 0 -> 4

    // length = 11
    // 0 -> 10
    // for(int i = 0; i < strlen(arr2); i++){

    // }
    printf("%s\n", arr2);

    for(int i = strlen(arr2) - 1; i >= 0; i--){
        printf("%c", arr2[i]);
    }
    printf("\n");

    
}