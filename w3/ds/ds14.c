#include <stdio.h>
#include <stdlib.h>

/*
Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
*/

int* insert(int n, int arr[], int newVal, int newPos) {
    // create the new array
    int *newArr = malloc((n+1) * sizeof(int));
    // add in all the values
    for(int i = 0; i < n + 1; i++) {
        newArr[i] = arr[i];
    }
    // up till the new position swap everything
    for(int i = n; i >= newPos; i--) {
        printf("i is: %d ", i);
        int temp = newArr[i];
        newArr[i] = newArr[i-1];
        newArr[i-1] = temp;

    }
    // there will be a zero in the correct swap
    // position and that is where we insert the
    // new value
    for(int i = 0; i < n+1; i++) {
        if(newArr[i] == 0) {
            newArr[i] = newVal;
        }
    }
    printf("\n");
    return newArr;
}

int main() {
    printf("Input the size of array : ");
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array in ascending order: \n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d :", arr[i]);
        scanf("%d", &arr[i]);
    }
    printf("The current list of the array :\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int newVal = 0;
    int newPos = 0;
    printf("Input the value to be inserted : ");
    scanf("%d", &newVal);
    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &newPos);
    int *resizedArr = insert(n, arr, newVal, newPos);
    for(int i = 0; i < n+1; i++) {
        printf("%d ", resizedArr[i]);
    }
    printf("\n");

}