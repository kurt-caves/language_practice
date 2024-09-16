#include <stdio.h>

/*
Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/
int main() {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Enter array elements 1 - 10\n");
    // printf("Length of array: %d\n", length);
    for(int i = 0; i < length; i++) {
        printf("Enter element - %d :\n", arr[i]);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}