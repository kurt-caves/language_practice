#include <stdio.h>

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int array[], int low, int high) {

    // pointer will be the rightmost element
    int pivot = array[high];
    // i pointer = -1
    int i = (low - 1);

    // loop starts at low up to pivot
    for(int j = low; j < high; j++) {
        // swap i and j if j <= pivot, increment i first
        if(array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    
    // when out of loop swap the pivot
    // i will be at the end of the right or left subarray
    swap(&array[i+1], &array[high]);
    // return 1 more than the pivot
    return(i+1);

}

void quickSort(int array[], int low, int high) {
    if ( low < high) {
        int pi = partition(array, low, high);
        // sort left
        quickSort(array, low, pi - 1);
        // sort right
        quickSort(array, pi + 1, high);
    }
}

int main(void) {

    int data[] = {8,7,2,1,0,9,6};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsorted Array:\n");
    printArray(data, n);

    // call qs with the array
    // the left and the right
    quickSort(data, 0, n-1);

    printf("Sorted array: \n");
    printArray(data, n);

    return 0;
}