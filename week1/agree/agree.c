#include <cs50.h>
#include <stdio.h>

int main(void){
    char a = get_char("Do you agree? ");
    if (a == 'y' || a == 'Y'){
        printf("Agreed!\n");
    }/*else if (a == 'Y'){
        printf("Agreed!\n");
    }*/ 
    else if (a == 'n' || a == 'N'){
        printf("Not agreed!\n");
    }/*else if (a == 'N'){
        printf("Not agreed!\n");
    }*/
    else{
        printf("Invalid char, try again!");
    }
}