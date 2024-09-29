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

int secondSmallest(int arr[], int n) {
    double smallest = INFINITY;
    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
        
    }
    printf("smallest : %.0f\n", smallest);
    int small = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                
            }
        }
    }
    return arr[1];
}

int main(void) {

    int n = 0;
    printf("Input the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input 5 elements in the array :\n");
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    int smallone = secondSmallest(arr, n);
    printf("Here is the second smallest element : %d\n", smallone);
    return 0;
}