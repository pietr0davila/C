#include <stdio.h>
#include <cs50.h>

/*
Walktrought:

1. inversão do número: do último digito (direita para esquerda)
2. dobro dos impares: dobrar números impares, se o dobro for maior que nove, subtrair nove
3. somar todos os digitos: somar os digitos dobrados e não dobrados
4. se a somar for múltipla de 10 (soma % 10 == 0) o número é válido

*/
void luhn(long num);
int main(void){
    long number = get_long("Qual os número do cartão? ");
    luhn(number);
}

void luhn(long num){
    for (int i = 0; i < num; i++){
        printf(num[i]);
    }
}
  