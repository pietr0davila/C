#include <stdio.h>

int main(void) {
    char char_array[5] = {'a', 'a', 'a', 'a', 'a'};
    int int_array[5] = {1, 2, 3, 4, 5};

    char *char_pointer;
    int *int_pointer;

    char_pointer = char_array;
    int_pointer = int_array;

    for (int i = 0; i < 5; i++)
    {
        printf("[integer pointer] points to %p, that contains %d\n", int_pointer, *int_pointer);
        int_pointer++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("[char pointer] points to %p, that contains %c\n", char_pointer, *char_pointer);
        char_pointer++;

    }
}