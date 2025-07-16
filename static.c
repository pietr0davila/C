#include <stdio.h>

void function(void) {
    int var = 0;
    static int static_var = 0; // Variável que salva o próprio estado entre chamadas distintas
    var++;
    static_var++;
    printf("[In function] var = %i\tstatic_var = %i", var, static_var);
}
int main(void) {
    int var = 5;
    static int static_var = 1337;
    for (int i = 0; i < 5; i++) {
        printf("[In main] var = %i\t static_var = %i", var, static_var);
        var++;
        static_var++;
        puts("");
    }
}