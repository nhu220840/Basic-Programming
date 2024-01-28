#include <stdio.h>

int main(){
    printf("Please enter any month: ");
    int daysOfMonth; scanf("%d", &daysOfMonth);
    switch (daysOfMonth){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("The number of days in that month are: 31");
            break;
        case 4: case 6: case 9: case 11:
            printf("The number of days in that month are: 30");
            break;
        case 2:
            printf("The number of days in that month are: 28 or 29");
            break;
    }
}