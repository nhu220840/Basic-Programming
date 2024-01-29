#include <stdio.h>
#include <string.h>

int main(){
    printf("Please enter a string: ");
    char str[100]; gets(str);
    printf("Please enter a character x: ");
    char x; scanf("%c", &x);
    printf("A string after being delete all the character %c is: ", x);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == x) continue;
        else printf("%c", str[i]);
    }
}