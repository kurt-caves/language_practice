#include <stdio.h>

/*
Write a C program that accepts two integers from the user and calculates the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63
*/

int main() {
    int first = 0;
    int second = 0;
    printf("Input the first integer: ");
    scanf("%d", &first);
    printf("Input the second integer: ");
    scanf("%d", &second);
    printf("The sum of the integers = %d\n", first + second);
}