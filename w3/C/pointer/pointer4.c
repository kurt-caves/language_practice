#include <stdio.h>
/*
4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 

*/

int main(void) {
    int a = 0;
    int b = 0;
    printf("input the first number ");
    scanf("%d", &a);
    printf("input the second number ");
    scanf("%d", &b);
    printf("The sum of the entered numbers is : %d\n", *(&a) + *(&b));

}