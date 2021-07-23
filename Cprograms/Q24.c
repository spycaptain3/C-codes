//C program to display Amastrong number between two intervals
#include <math.h>
#include <stdio.h>
int main() {
  int low, high,i, originalNumber, rem, count = 0;
  double result = 0.0;
  printf("Enter the highe interval: \n");
  scanf("%d", &high);
  printf("Enter the lower interval: \n");
  scanf("%d", &low);
  printf("Armstrong numbers between %d and %d are: ", low, high);

  if (high < low) {
    high += low;
    low = high - low;
    high -= low;
  }
   

  for (i= low + 1; i< high; ++i) {
    originalNumber = i;


    while (originalNumber != 0) {
      originalNumber /= 10;
      ++count;
    }

    originalNumber = i;

    while (originalNumber != 0) {
      rem = originalNumber % 10;
      result += pow(rem, count);
      originalNumber /= 10;
    }

    if ((int)result == i) {
      printf("%d ", i);
    }

    count = 0;
    result = 0;
  }

  return 0;
}