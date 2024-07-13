#include <stdio.h>
#include <cs50.h>

void print(int hei, int len);
int main(void){
    int height;
    do{
        height = get_int("Qual a altura da pirâmide? ");
    }while(height < 0 || height > 8);
    for (int i = 0; i < height; i++){
        print(height, i + 1);
    }
}
void print(int hei, int len){
    for (int i = 0; i < hei - len; i++){
        printf(" ");
    }
    for (int j = 0; j < len; j++){
        printf("#");
    }
    printf("  ");
    for (int k = 0; k < len; k++){
        printf("#");
    }
    printf("\n");
}
