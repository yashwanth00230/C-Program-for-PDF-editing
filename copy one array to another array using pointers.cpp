#include <stdio.h>

#define SIZE 10 

int main() {
    int array1[SIZE], array2[SIZE], *ptr1, *ptr2;
    int i;

    
    printf("Input array1 elements: ");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array1[i]);
    }

    
    ptr1 = array1;
    ptr2 = array2; 

    for (i = 0; i < SIZE; i++) {
        *(ptr2 + i) = *(ptr1 + i); 
    }

    
    printf("Array1: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array1[i]);
    }

    printf("\nArray2: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}
