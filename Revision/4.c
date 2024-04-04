#include <stdio.h>
#include <string.h>

int main(){
    char *cities[] = {"Hanoi", "LangSon", "PhuQuoc"};
    int **i = &cities[0];
    printf("%c\n", **i);
}