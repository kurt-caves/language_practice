#include <stdio.h>

/*
 Write a program in C to print the first 50 natural numbers using recursion.
Expected Output:

 The natural numbers are : 1  2  3
  4  5  6  7  8  9  10  11  12  13
  14  15  16  17  18  19  20  21  
22  23  24  25  26  27  28  29  30
  31  32  33  34  35  36  37  38  
39  40  41  42  43  44  45  46  47
  48  49  50 
*/

int recur(int start) {
  if(start > 50) {
    return 1;
  }
  printf("%d  ", start);
  if(start % 10 == 0) {
    printf("\n");
  }
  return recur(start + 1);
  
}

int main(void) {

    printf("The natural numbers are: ");
    printf("\n");
    int start = 1;
    recur(start);
    printf("\n");

}