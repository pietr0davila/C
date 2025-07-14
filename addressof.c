#include <stdio.h>

int main(void) {
    int var = 10;
    int *ptr = 0;
    ptr = &var;

    printf("%p", &ptr);
}