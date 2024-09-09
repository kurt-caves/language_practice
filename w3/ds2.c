#include <stdio.h>

/*
Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/

int main() {
    int n = 0;
    printf("Input the number of element to store in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
    printf("Input %d number of elements in the array: \n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", arr[i]);
        scanf("%d", &arr[i]);
    }
    printf("The values stored into the array are :");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // loop backwards
    printf("The values stored into the array in reverse are: ");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
     printf("\n");
}