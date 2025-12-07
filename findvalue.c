#include <stdio.h>

int* find_value(int *arr, int size, int target) {
    int *end = arr + size;

    while(arr < end) {
        if(*arr == target) {
            return arr;
        }

        arr++;
    }

    return NULL;
}

void main() {
    int numbers[] = {0, 1, 2, 3, 4, 5};
    int *num = &numbers[0];
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 10;

    int *result = find_value(num, size, target);

    printf("%d /// ", *result);
    printf("%p", result);
}