#include <stdio.h>
#include <string.h>

int main(){
    printf("Hello USTH World\n");
    
    int a = 10;
    float b = 10.3, c = 10.4324324328908;
    char d = 'A';
    printf("%d %f %lf %c\n", a, b, c, d);

    printf("Please enter a string: ");
    char str[100]; scanf("%s", str);
    printf("A string entered: %s\n", str);
    
    char special_char = '@';
    printf("Special char is: %c", special_char);
}