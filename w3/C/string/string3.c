#include <stdio.h>

/*
3. Write a program in C to separate individual characters from a string.

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string are : 
w  3  r  e  s  o  u  r  c  e  .  c  o  m 
*/

int main(void) {

    char str[50];
    printf("enter the string : ");
    fgets(str, sizeof(str), stdin);
    int counter = 0;
    while(str[counter] != '\0'){
        printf("%c ", str[counter++]);
        
    }

    return 0;
}