#include <stdio.h>
#include <string.h>

int main(void) {
    char string[20];
    char *pointer;
    char *pointer2;
    strcpy(string, "Hello, world!");
    // sintaxe: strcpy(dest, src)
    pointer = string;
    printf("%s\n", pointer);
    pointer2 = pointer + 2;
    printf("%s\n", pointer2);
    strcpy(pointer2, "y you guys!\n");
    printf("%s", pointer);

}