#include <stdio.h>

/*
5. Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11 

*/

int add(int *a, int *b) {
    int c = *a + *b;
    return c;
}

int main(void) {
    int a = 0;
    int b = 0;

    printf("input the first number : ");
    scanf("%d", &a);
    printf("input the second number : ");
    scanf("%d", &b);

    int c = add(&a, &b);
    printf("the out put: %d\n", c);

}

