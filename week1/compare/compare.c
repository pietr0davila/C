#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("What's x? ");
    int y = get_int("What's y?");
    if (x > y){
        printf("x is greater than y\n");
    }else if (y > x){
        printf("y is greater than x\n");
    }else{
        printf("y is equal than x\n");
    }
}