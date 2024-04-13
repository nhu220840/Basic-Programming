#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Please enter the number of elements in the series: ");
    int n; scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int)); //dynamic array
   
    if(ptr == NULL){
        printf("Error! memory not allocated.");
        return 0;
    }
    
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i); 
    }
    printf("The array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }

    free(ptr); 
    return 0;
}