#include <cs50.h>
#include <stdio.h>

//int add(int a, int b);
int main(void){
    float x = get_int("x: ");
    float y = get_int("y: ");
    printf("%f", x / y);
}
/*
int add(int a, int b){
    return a + b;
}
*/