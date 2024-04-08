#include <stdio.h>
int main(){
    char arr[15] = "Hello World";
    char *ptr;
    ptr = arr;
    printf("%c\n", ptr[1]);
    
    return 0;
}
