#include <stdio.h>

#define LENGTH 3

int data[LENGTH]; // Global array initialized to 0 by default

int main(int argc, char **argv)
{
    int *pi;   // Pointer to an integer
    int **ppi; // Pointer to a pointer to an integer

    printf("multiple indirection example\n");

    // Initialize array with values 0, 1, 2
    for (int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }

    // Print initial array values
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d\n", data[i]);
    }

    pi = data; // pi points to the start of the array (data[0])
    ppi = &pi; // ppi points to the address of pi

    // Loop through the array using pointer arithmetic
    for (int i = 0; i < LENGTH; i++)
    {
        printf("array address is %p\n", (void *)data);
        printf("item pointed to by pi is %d\n", *pi);
        printf("item pointed to by ppi is %p\n", (void *)*ppi);
        printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
        printf("The address of pi is %p and the value\nof ppi (what it points to) is %p\n\n", (void *)&pi, (void *)ppi);

        pi += 1; // Move pi to the next integer in the array
    }

    return 0;
}