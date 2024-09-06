// chapter 3 3-17
#include <stdio.h>

// take in float for gallons, -1 to end
// take in miles
// calc gallons / mile
// when -1 calculate the average

int main() {

    float gallons = 0;
    float miles = 0;
    float average = 0;
    float overallAverage = 0;
    int count = 0;
    while(1) {
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
        if(gallons == -1) {
            break;
        }
        printf("Enter the miles driven: ");
        scanf("%f", &miles);
        average = miles/gallons;
        printf("The miles / gallon for this tank was: %f\n", average);
        count++;
        overallAverage += average;
            
    }
    printf("The overall average miles / gallon was: %f\n", overallAverage /count);

    return 0;
}