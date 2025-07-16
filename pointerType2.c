#include <stdio.h>

int main(void) {
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    char *char_pointer;
    int *int_pointer;

    char_pointer = int_array;
    int_pointer = char_array;
    // Define o valor dos ponteiros como o endereço do primeiro elemento de cada array respectiva
    
    for (int i = 0; i < 5; i++) {
        printf("[integer pointer] points to %p, that contains %d\n", int_pointer, *int_pointer);
        // Exibe o valor apontado e o conteúdo do ponteiro
        int_pointer = (int *) ((char *) int_pointer+ 1); // Faz o type casting do ponteiro e trata o valor como 4-4 byte
    }
    for (int i = 0; i < 5; i++) {
        printf("[char pointer] points to %p, that contains %c\n", char_pointer, *char_pointer);
        char_pointer = (char *) ((int *) char_pointer + 1); // Faz o type casting do ponteiro e trata como 1-1 byte 
    }
}