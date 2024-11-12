#include <stdio.h>

/*
1. Write a program in C to input a string and print it.

Test Data :
Input the string : Welcome, w3resource

Expected Output :

The string you entered is : Welcome, w3resource
*/

int main(void) {
    char message[50];
    printf("Input the string: ");
    fgets(message, sizeof(message), stdin);
    printf("%s\n", message);

    return 0;
}