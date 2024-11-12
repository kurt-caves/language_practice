#include <stdio.h>

/*
2. Write a program in C to find the length of a string without using library functions.

Test Data :
Input the string : w3resource.com

Expected Output :

Length of the string is : 15 
*/

int main(void) {

    char str[50];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int counter = 0;
    int length = 0;
    while(str[counter] != '\0') {
        if(str[counter] == ' ' || str[counter] == '\n'){
            length--;
        }
        counter++;
        length++;
    }
    printf("length of string : %d\n", length);

    return 0;
}