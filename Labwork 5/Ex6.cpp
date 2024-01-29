#include <stdio.h>
#include <string.h>

int main(){
    printf("Please enter a string: ");
    char str[100]; gets(str); //scanf("%s", str);

    printf("The string in reverse is: ");
    int i = 0, j = strlen(str) - 1;
    while(i < j){
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++; j--;
    }
    for(int i = 0; i < strlen(str); i++){
        printf("%c", str[i]);
    }

    // for(int i = strlen(str) - 1; i >= 0; i--){
    //     printf("%c", str[i]);
    // }

}