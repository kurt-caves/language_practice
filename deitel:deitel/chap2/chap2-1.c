
#include <stdio.h>

// ask user to enter two integers
// get the numbers from user
// print the larger number
// if equal = equal

// argc is the number of arguments from command line
// argv command line arguments, strings
int main(int argc, char *argv[]){
    int num1, num2 = 0;
    printf("Please enter the first number, num1: \n");
    scanf("%d", &num1);
    printf("Please enter the second number, num2: \n");
    scanf("%d", &num2);
    if(num1 < num2) {
        printf("num2 is larger \n");
    }
    if(num1 == num2){
        printf("the numbers are equal\n");
    }
    if(num1 > num2) {
        printf("num1 is greater than num2\n");
    }
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}