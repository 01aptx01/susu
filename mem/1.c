#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Error");
        return;
    }

    *ptr = 100;
    free(ptr);
    return 0;
}