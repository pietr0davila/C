#include <stdio.h>
#include <string.h>

int main(void) {
    char string[20];
    int A = -125;
    unsigned int B = 24951;
    strcpy(string, "Test");

    printf("[A] Dec: %d\tHex: %x\t Unsigned: %u\n", A, A, A); // Exibe o valor em decimal, hexa e da forma unsigned (Sem sinal) 
    printf("[B] Dec: %d\tHex: %x\t Unsigned: %u\n", B, B, B);
    printf("[Field width B] 3: '%3u', 10: '%10u', '%08u\n", B, B, B); // Exibw o valor na memória com pelo menos 3, 10 e 8 espaços mínimos (Respectivamente)

    // Field width: Se o valor de %3u for maior que o valor do número total, preenche com espaços ou zero (Espaços se %3u e 0 se %08u) Útil para alinhamento de itens em tabelas
    printf("[String] %s Address %p\n", string, (void *)string); // Exibe o conteúdo da string e o endereçamento na memória (Do primeiro caractere)

    printf("[A] Variable A is in address: %p\n", (void*)&A); // Exibe o endereçamento na memória da variável A, não do conteúdo


}