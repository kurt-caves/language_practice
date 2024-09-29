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

    // choose the rightmost element for pivot
    int pivot = array[high];

    // pointer starts out at -1
    int i = (low - 1);

    // iterate through array, if element at j is less than pivot
    // increment i then swap j and pivot
    for(int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    

    // swap parition
    swap(&array[i + 1], &array[high]);
    printArray(array, 7);
    // return pointer to lowest element of right partitiion
    return(i+1);

}
void quickSort(int array[], int low, int high) {

    // base case
    if (low < high) {
        int pi = partition(array, low, high);

        // left side
        quickSort(array, low, pi -1);
        // right side
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