#include <stdio.h>
#include <math.h>

int main() {
  long long binaryNum;
  int decimalNum = 0, i = 0, remainder;
  printf("Enter a binary number: ");
  scanf("%lld", &binaryNum);
  while (binaryNum != 0) {
    remainder = binaryNum % 10;
    decimalNum += remainder * pow(2, i);
    ++i;
    binaryNum /= 10;
  }
  printf("Decimal equivalent: %d", decimalNum);
  return 0;
}