#include <stdio.h>

void swap_val(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Value A = %d\nValue B = %d", *a, *b);
}

void main() {
    int a = 10, b = 20;
    int *a_ptr = &a, *b_ptr = & b;

    swap_val(a_ptr, b_ptr);
}