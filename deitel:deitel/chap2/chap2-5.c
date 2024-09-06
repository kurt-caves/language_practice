// Chapter 2-22
#include<stdio.h>
#include<math.h>

// take in five numbers
// print the largest and smallest

int main() {

    int arr[5];
    int length = sizeof(arr) / sizeof(arr[0]);
    int smallest = INFINITY;
    double largest = -INFINITY;
    printf("Enter 5 values: ");
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i < length; i++ ) {
        if(arr[i] <= smallest) {
            smallest = arr[i];
        }
        if(arr[i] >= largest) {
            largest = arr[i];
        }
        
    }
    printf("largest: %.0f\n", largest);
    printf("smallest: %d\n", smallest);

    return 0;
}