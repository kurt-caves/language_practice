#include <stdio.h>
#include <math.h>

// get 3 differen integers from keyboard
// print the sum, average, product,
// smallest and the largest

int main(int argc, char *argv[]) {
   

    printf("Enter 3 more numbers: ");
    int arr[3]; // actual number not indicies 
    // sizeof(arr): get total bytes
    // sizeof(arr[0]): get size of one element
    // get the total number of elements
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < length; i++) {
        // arr[i] = scanf("%d", i );
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < length; i++) {
        printf("num: %d\n", arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum += arr[i];
    }

    printf("Here is the sum: %d\n", sum);
    printf("Here is the average %d\n", sum / 3);

    int product = 1;
    for(int i = 0; i < length; i++) {
        product = product * arr[i];
    }
    printf("Here is the product: %d\n", product);

    // need to find smallest
    float smallest = INFINITY;
    for(int i = 0; i < length; i++) {
        if(arr[i] <= smallest) {
            smallest = arr[i];
        }
    }

    printf("Here is the smallest number: %d\n", smallest);
    
    float biggest = -INFINITY;
    for(int i = 0; i < length; i++) {
        if(arr[i] >= biggest) {
            biggest = arr[i];
        }
    }

    printf("Here is the biggest number: %d\n", biggest);

    return 0;
}