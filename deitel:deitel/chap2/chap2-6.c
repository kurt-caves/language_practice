// Chapter 2-24
#include<stdio.h>

// get an integer and determine if its odd or even

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("the number is even\n");
    }
    else printf("the number is odd\n");

    return 0;
}
