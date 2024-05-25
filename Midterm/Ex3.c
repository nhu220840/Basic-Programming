#include <stdio.h>

//Yeu cau nguoi dung nhap vao 5 phan tu
//Luu vao 1 mang
//Dung pointer de tim ra phan tu cuoi cung trong mang
//Dung pointer de in ra mang tu cuoi ve dau

int main(){
    int a[5];
    printf("Enter 5 elements: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    int *last_element = a + 4;
    printf("Last element: %d\n", *last_element);
    int *ptr = a;
    printf("All the elements from the last to the first: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ", *(ptr + i));
    }
}