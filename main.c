#include "stdio.h"

int main(void) {
  int firstNumber, secondNumber, sum;
  printf("Enter the first number:");
  scanf("%d", &firstNumber);
  printf("Enter the second number:");
  scanf("%d", &secondNumber);
  sum = firstNumber + secondNumber;
  printf("The sum of %d and %d is %d.", firstNumber, secondNumber, sum);
  return 0;
}