#include <stdio.h>
#include <math.h>

/*
Write a program in C to find the second smallest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4
*/

void secondSmallest(int arr[], int n) {
    double smallest = INFINITY;
    for(int i = 0; i < n; i++) {
        
    }
}

int main(void) {

    int n = 0;
    printf("Input the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input 5 elements in the array :");
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    secondSmallest(arr, n);
    return 0;
}