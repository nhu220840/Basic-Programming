#include <stdio.h>

int main(){
    int n = 200;
    int* ptr = &n;

    printf("%d\n", n);
    printf("%d\n", ptr);
    printf("%d\n", *ptr);

    int s1[5] = {1, 2, 3, 4, 5};
    int *p = s1; //int *p = &s1[0];
    printf("%d\n", *p);
    p++;
    printf("%d", *p);
}