#include <stdio.h>

/*
 Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000
*/

int main() {

    int distance = 0;
    float fuel = 0;
    printf("Input total distance in km: ");
    scanf("%d", &distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);
    printf("Average consumption (km/lt) %.2f\n", distance / fuel);

    return 0;
}