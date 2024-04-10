#include <stdio.h>

int func(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    
}

int main(){
    int x = 10, y = 20;
    func(&x, &y);
    printf("%d %d", x, y);
}
