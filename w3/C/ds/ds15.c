#include <stdio.h>
#include <stdlib.h> // malloc

/*
Write a program in C to delete an element at a desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/

int* shrinkArray(int n, int arr[], int delPos) {

    for(int i = 1; i < delPos; i++) {
        if(arr[i] == delPos) {
            arr[i] = 0;
        }
    }
    int *newArr = malloc((n-1) * sizeof(int));
    int j = 0;
    for(int i = 0; i < n; i++) {
        // i will be updated but j wont be updated
        // when a zero is found
        if(arr[i] != 0){
            newArr[j] = arr[i];
            j++;

        }
    }
    printf("\n");

    
    return newArr;
}

int main() {
    int n =0;
    printf("Input the size of array : ");
    int *arr = malloc((n) * sizeof(int));
    scanf("%d", &n);
    printf("Input 5 elements in the array in ascending order:\n");
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The current array: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Input the position where to delete: ");
    int delPos = 0;
    scanf("%d", &delPos);
    int *shrunkArr = shrinkArray(n, arr, delPos);
    printf("The updated array: \n");
    for(int i = 0; i < n-1; i++) {
        printf("%d ", shrunkArr[i]);
    }
    printf("\n");

}