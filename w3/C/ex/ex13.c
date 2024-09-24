#include <stdio.h>
#include <math.h>

/*
Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/

int main() {

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    double max = -INFINITY;
    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);
    printf("enter num3: ");
    scanf("%d", &num3);
    if(num1 > max) {
        max = num1;
    }
    if(num2 > max) {
        max = num2;
    }
    if(num3 > max) {
        max = num3;
    }
    printf("Max value: %.0f\n", max);

    return 0;
}