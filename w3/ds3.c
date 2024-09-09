#include <stdio.h>

/*
Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/

int main() {
    int n = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
    printf("Input %d elements in the array : ", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", arr[i]);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements in the array is : %d\n", sum);

}