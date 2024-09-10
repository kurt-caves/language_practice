#include <stdio.h>

/*
Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum.
Expected Output:

3
12
*/
int main(){
    int num1 = 0;
    int num2 = 0;
    printf("Enter num 1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    if(num1 == num2 ) {
        printf("result: %d\n", (num1 + num2) * 3 );
    }
    else{
        printf("result: %d\n", num1 + num2);
    }
}