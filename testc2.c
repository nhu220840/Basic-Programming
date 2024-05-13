#include <stdio.h>

int main(){
    float n;
    int result;
    do{
        printf("Enter a positive number: ");
        result = scanf("%f", &n);
        if(result != 1 || n <= 0){
            printf("Invalid input!!! Please enter a positive number.\n");
            // Clear input buffer
            while (getchar() != '\n');
        }
        else{
            break;
        }
    } while(1);
    printf("A positive number is: %f", n);
}
