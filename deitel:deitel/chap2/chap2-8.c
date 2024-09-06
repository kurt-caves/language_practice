#include <stdio.h>

int main(){

    int num = 0;
    printf("enter a five digit number: ");
    scanf("%d", &num);
    // printf("%d");
    // 42339
    // 9
    int num1 = num %10;
    num = num /10;
    int num2 = num %10;
    num = num /10;
    int num3 = num %10;
    num = num /10;
    int num4 = num %10;
    num = num /10;
    int num5 = num %10;

    printf("%d   %d   %d   %d   %d\n", num5, num4, num3, num2, num1);

    // int num1 = 0;
    // for(int i = 0; i < 5; i++) {
    //     num1 = num % 10;
    //     printf("%d\n", num1);
    //     num = num / 10;
    // }


    return 0;
}