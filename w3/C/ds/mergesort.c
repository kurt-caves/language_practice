#include <stdio.h>

void merge(int arr[], int start, int mid, int end) {
    int leftSize = mid - start + 1;
    int rightSize = end - mid;
    int left[leftSize], righ[rightSize];

    
}

void mergeSort(int arr[], int left, int right) {
    // base case
    if (left < right) {
        // mid point for dividing the array
        int mid = left + (right - left) / 2;
        // recursively sort the first half
        mergeSort(arr, left, mid);
        // recursively sort the second half
        mergeSort(arr, mid + 1, right);
        // merge the sorted sub arrays back together
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
  for (int index = 0; index < size; index++)
    printf("%d ", arr[index]);
  printf("\n");
}


int main() {
    int arr[] = {6,5,12,10,9,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // give the arr
    // the left pointer and the right pointer
    mergeSort(arr, 0, size - 1);

    printf("Sorted array: \n");
    printArray(arr, size);
}