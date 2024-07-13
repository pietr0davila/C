#include <stdio.h>
#include <cs50.h>

void printRow(int height, int row);

int main(void) {
    int height = get_int("Set the height: ");
    for (int i = 0; i < height; i++) {
        printRow(height, i + 1);
    }
}

void printRow(int height, int length) {
    for (int i = 0; i < height - length; i++) {
        printf(" ");
    }
    for (int j = 0; j < length; j++) {
        printf("#");
    }
    printf("\n");
}
