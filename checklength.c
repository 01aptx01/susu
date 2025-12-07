#include <stdio.h>

int my_strlen(const char *s) {
    int result = 0;
    const char *check = s; // เพราะประกาศ s เป็น const
    while(*check != '\0') check++;

    result = (int)(check - s) ;
    return result;
}

void main() {
    char name[] = "Gemini";
    printf("%d", my_strlen(name));
}