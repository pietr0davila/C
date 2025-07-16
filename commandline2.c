#include <stdio.h>
#include <stdlib.h> // Importa a função exit()

/*
    CLI com argumentos na commandline
    arg 1: Mensagem
    arg 2: vezes para repetir
*/
void usage(char *program_name) {
    printf("[usage] %s <message> <# times to repeat>", program_name);
    exit(1);
}
int main(int argc, char *argv[]) {
    int array_for_int = atoi(argv[2]);
    // if (argc != 3) {
    //     usage(argv[0]);
    // }
    for (int i = 1; i <= array_for_int; i++) {
        printf("%i. %s\n", i, argv[1]);
    }
}