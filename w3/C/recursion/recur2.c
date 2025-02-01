#include <stdio.h>

/*
2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
Test Data :
Input the last number of the range starting from 1 : 5
Expected Output:

The sum of numbers from 1 to 5 : 
15
*/

int recurSum(int hold, int n) {
    if(n < 1) {
        return hold;
    }
    hold += n;
    return recurSum(hold, n - 1);
}

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int hold = 0;
    hold = recurSum(hold, n);
    printf("Sum: %d\n", hold);
    return 0;
}