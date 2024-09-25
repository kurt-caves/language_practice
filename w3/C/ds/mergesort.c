#include <stdio.h>

void merge(int arr[], int start, int mid, int end) {

    // calc left and right arrays
    int leftArraySize = mid - start + 1;
    int rightArraySize = end - mid;
    // temp arrays
    int leftArray[leftArraySize], rightArray[rightArraySize];
    // copy elements to left array
    for(int leftIndex = 0; leftIndex < leftArraySize; leftIndex++)
        leftArray[leftIndex] = arr[start + leftIndex];
    // copy elements to right array
    for(int rightIndex = 0; rightIndex < rightArraySize; rightIndex++)
        rightArray[rightIndex] = arr[mid + 1 + rightIndex];
    
    int leftArrayIndex = 0; // current element left array
    int rightArrayIndex = 0; // current element right array
    int mergedArrayIndex = start; // index for merged array

    // Compare and merge elements from leftArray and rightArray into arr[]
    while (leftArrayIndex < leftArraySize && rightArrayIndex < rightArraySize) {
        // If the current element in the left array is smaller or equal, place it in the merged array
        if (leftArray[leftArrayIndex] <= rightArray[rightArrayIndex]) {
            arr[mergedArrayIndex] = leftArray[leftArrayIndex];  // Place left element in merged array
            leftArrayIndex++;  // Move to the next element in the left array
        } else {
            // If the right array element is smaller, place it in the merged array
            arr[mergedArrayIndex] = rightArray[rightArrayIndex];  // Place right element in merged array
            rightArrayIndex++;  // Move to the next element in the right array
        }
        mergedArrayIndex++;  // Move to the next position in the merged array
    }

    // If there are remaining elements in the leftArray, copy them to the merged array
    while (leftArrayIndex < leftArraySize) {
        arr[mergedArrayIndex] = leftArray[leftArrayIndex];  // Copy remaining left array elements
        leftArrayIndex++;  // Move to the next element in the left array
        mergedArrayIndex++;  // Move to the next position in the merged array
    }

    // If there are remaining elements in the rightArray, copy them to the merged array
    while (rightArrayIndex < rightArraySize) {
        arr[mergedArrayIndex] = rightArray[rightArrayIndex];  // Copy remaining right array elements
        rightArrayIndex++;  // Move to the next element in the right array
        mergedArrayIndex++;  // Move to the next position in the merged array
    }

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