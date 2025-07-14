#include <stdio.h>
#include <string.h>

int main(void) {
    int counter;
    char msg[20];
    strcpy(msg, "Hello, world");

    printf("How many times? ");
    scanf("%i", &counter); // Atribui o valor do input o local da memória de counter. Operação [src] [dest]

    for (int i = 1; i <= counter; i++) {
        printf("%i. %s\n", i, msg);
    }
}