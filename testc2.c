#include <stdio.h>

int main(){
    char arr[15] = "Hello World";
    char *ptr; //doi thanh con tro kieu char 
    ptr = arr;
    printf("%c", ptr[1]);
}
