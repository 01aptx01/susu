#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str1 = "Hello";
    char *str2 = "World";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int total_len = len1 + len2;
    char *result = (char *)malloc((total_len + 1) * sizeof(char));

    if (result == NULL) {
        printf("Error");
        return 0;
    }

    strcpy(result, str1);
    strcat(result, str2);
    printf("Result: %s\n", result);
    free(result);
    return 0;
}