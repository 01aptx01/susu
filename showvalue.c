#include <stdio.h>

void show_val(int *a, int *b) {
    printf("Value A = %d\nValue B = %d", *a, *b);
}

void main() {
    int a = 1, b = 2;
    int *a_ptr = &a, *b_ptr = & b;

    show_val(a_ptr, b_ptr);
}