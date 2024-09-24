# include <stdio.h>

/*
Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/

int main(){

    int days = 0;
    int weeks = 0;
    int years = 0;
    int given = 1329;

    printf("Years: %d\n", given / 365);
    printf("Weeks: %d\n", given % 365 / 7);
    printf("Days: %d\n", given % 365 % 7);

    return 0;
}