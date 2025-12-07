#include <stdio.h>

void main() {
    char *names[] = {"John", "Jane", "Bob", "Alice"};
    int count = sizeof(names) / sizeof(names[0]);
    char **ptr = names;
    char **end = names + count;

    printf("--- ใช้ Index แบบปกติ (เพื่อให้เห็นภาพ) ---\n");
    for (int i = 0; i < count; i++){
        printf("Index %d: %s\n", i, names[i]);
    }

    while (ptr < end) {
        printf("Name: %s\n", *ptr);
        ptr++;
    }
}