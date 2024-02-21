#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Please enter the number of elements in the series: ");
    int n; scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int)); //dynamic array
    //dynamic array ko gioi han phan tu nhu static array (chi co the chua den 1e7 phan tu)
    //address cua dynamic array ko dc luu lien nhau nen muon truy cap vao no phai dung pointer

    //Kiem tra xem ko gian co du de luu tru ko?
    // - Neu ptr tra ve NULL chung to vung nho ko du de chua du lieu can luu -> ket thuc chuong trinh
    // - Neu ko, chung to bo nho da duoc cap phat thanh cong -> tiep tuc chuong trinh
    if(ptr == NULL){
        printf("Error! memory not allocated.");
        exit(0);
    }

    //Co 2 khai niem can phan biet:
    // - Address: dia chi cua o chua du lieu
    // - Value: du lieu chua trong o do
    printf("Please enter the series: ");
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i); //nhap cac phan tu trong mang bang ptr
        //boi vi cac address trong dynamic array ko lien ke nhau vay nen ko the nhap nhu static array (ptr[i]) dc
        //ptr + i: truy cap vao dia chi cua phan tu thu i trong mang

        //so sanh voi static array:
        //thuong khi nhap trong static array se co toan tu &a[i] de scanf
        //nhung o day ko co? tai sao?
        //ban chat toan tu '&' se truy cap vao address cua cai o do de truyen value
        //vay nen trong dynamic array ptr se truy cap truc tiep vao address de truyen value ma ko can thong qua toan tu '&'
    }

    //'*' la toan tu giai tham chieu
    //giai tham chieu la gi? 
    //tuc nghia la no se di den address do va xem tai address do thi value tuong ung la bao nhieu
    int max = *ptr, min = *ptr; //coi gtri cua phan tu dau tien la gtln, gtnn
    for(int i = 1; i < n; i++){
        if(*(ptr + i) > max)
            max = *(ptr + i); //*(ptr + i): gtri cua phan tu thu i
        if(*(ptr + i) < min)
            min = *(ptr + i);
    }
    printf("The minimum in the given series is: %d\n", min);
    printf("The maximum in the given series is: %d\n", max);

    free(ptr); //giai phong bo nho
}