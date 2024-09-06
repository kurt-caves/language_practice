#include <stdio.h>

/*/
Write a C program to print the following characters in reverse.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/

int main() {
    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';
    printf("The reverse of %c%c%c, is %c%c%c\n", char1, char2, char3, char3, char2, char1);
}