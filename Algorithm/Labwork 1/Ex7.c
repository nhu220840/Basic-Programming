#include <stdio.h>

int main(){
    float n;
    int result;
    int count_wrong_inp = 0;
    do{
        printf("Enter a positive number: ");
        result = scanf("%f", &n);
        if(result != 1 || n <= 0){
            count_wrong_inp++;
            printf("Invalid input!!! Please enter a positive number.\n");
            // Clear input buffer
            while (getchar() != '\n');
        }
        else{
            break;
        }
    } while(1);
    printf("You have entered wrong %d time(s).\n", count_wrong_inp);
    printf("A positive number is: %f", n);
}
