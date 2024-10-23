#include <stdio.h>

/*
6. Write a program in C to find the maximum number between two numbers using a pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number.
*/

int main(void) {
    int a, b = 0;
    int *ptra = &a;
    int *ptrb = &b;
    printf("Input the first number : ");
    scanf("%d", ptra);
    printf("Input the first number : ");
    scanf("%d", ptrb);
    if(*ptra > *ptrb) {
        printf("%d is the max number\n", *ptra);
    }
    else{
        printf("%d is the max number\n", *ptrb);
    }

}