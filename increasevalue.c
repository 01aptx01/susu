#include <stdio.h>

void increase_value(int *arr, int size) {
    int *current = arr;
    int *end = arr + size;
    while ( current < end ) {
        *current += 10;
        current++;
    }
}

void main() {
    int test1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(test1) / sizeof(test1[0]);

    printf("Array ก่อนเพิ่มค่า: ");
    for (int i = 0; i < size; i++) {
        printf("%-4d", test1[i]); // Output: 0 1 2 3 4 5 6 7 8 9
    }
    printf("\n");
    
    increase_value(test1, size);
    
    printf("Array หลังเพิ่มค่า: ");
    for (int i = 0; i < size; i++) {
        printf("%-4d", test1[i]); // Output: 10 11 12 13 14 15 16 17 18 19
    }
    printf("\n");
}