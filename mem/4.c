#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = NULL;
    int **pp = &p;

    printf("P is currently %p\n", (void *)p);
    *pp = (int *)malloc(sizeof(int));

    if (*pp == NULL) {
        printf("ERROR\n");
        return 1;
    }

    printf("*pp -> Allocated memory at address %p\n", (void *)*pp);
    printf("p   -> Allocated memory at address %p\n", (void *)p);
    **pp = 500;

    printf("Value *p  : %d\n", *p);
    printf("Value **pp: %d\n", **pp);

    free(p);
    p = NULL;

    return 0;
}