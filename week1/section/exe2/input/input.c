#include <stdio.h>
#include <cs50.h>

int main(void){
    string first_name = get_string("What's your first name? ");
    string last_name = get_string("what's your last name? ");
    printf("Hello, %s %s\n", first_name, last_name);
}