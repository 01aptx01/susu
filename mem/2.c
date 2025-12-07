#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;
    int *arr;
    int sum = 0;
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Error");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("ตัวที่ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    printf("Sum: %d\n", sum);
    free(arr);
    return 0;
}