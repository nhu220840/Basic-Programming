#include <stdio.h>
#include <string.h>

int main(){
    printf("Please enter a string: ");
    char str[100]; gets(str);
    
    int cnt = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a') cnt++;
    }
    printf("The number of the character 'a' in the string: %d\n", cnt);
    printf("Their orders in the string: ");
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a') printf("%d ", i + 1);
    }
}