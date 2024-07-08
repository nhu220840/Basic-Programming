#include <stdio.h>

int main(){
    printf("Enter the month: ");
    int n; scanf("%d", &n);
    if(n <= 0 || n > 12){
        printf("INVALID!!!");
        return 0;
    }
    printf("The day in month: ");
    switch(n){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31");
            break;
        case 2:
            printf("28 or 29");
            break;
        default:
            printf("30");
            break; 
    }
    return 0;
}