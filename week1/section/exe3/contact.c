#include <stdio.h>
#include <cs50.h>
/*
User contact information that's includes:
1. name, surname
2. age
3. phone number
*/
int main(void){
    // username inputs
    string name = get_string("Add the user name: ");
    string surname = get_string("Add the user surname: ");
    // age input
    int age = get_int("Add the user age: ");
    // phone number input
    string phone = get_string("Add the user phone number: ");

    printf("User added successfully!\n");
    printf("New user info: \n");
    printf("name & surname: %s %s\n", name, surname);
    printf("age: %i\n", age);
    printf("phone number: %s\n", phone)
}