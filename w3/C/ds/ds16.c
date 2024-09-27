#include <stdio.h>
#include <stdlib.h> // malloc
#include <math.h>

/*
Write a program in C to find the second largest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6
*/

void secondBiggest(int n, int arr[]) {
    double max = -INFINITY;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    int second = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(arr[j] > arr[i] && arr[j] < max) {
                second = arr[j];
            }
        }
    }

    printf("The Second largest element in the array is : %d \n", second);
    printf("The largest element in the array is: %.0f \n", max);

}

int main(void) {
    int n = 0;
    printf("Input the size of array : ");
    scanf("%d", &n);
    // int arr[n];
    int *arr = malloc((n) * sizeof(int));
    printf("Input 5 elements in the array : \n");
    for(int i = 0; i < n; i++) {
        printf("element -  %d : ", i);
        scanf("%d", &arr[i]);
    }
    secondBiggest(n, arr);
    return 0;
}