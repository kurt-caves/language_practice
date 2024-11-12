#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4. Write a program in C to print individual characters of a string in reverse order.

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string in reverse are :
m  o  c  .  e  c  r  u  o  s  e  r  3  w 
*/

int main(void) {
    
    char str[50];
    printf("enter the string : ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    printf("length = %d\n", length);
    for(int i = length - 1; i >= 0; i--) {
        if(str[i] == ' ' || str[i] == '\n');
        else {
            printf("%c ", str[i]);
        }
    }
    printf("\n");

    return 0;
}