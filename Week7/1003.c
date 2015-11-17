#include <stdio.h>

int main() {
  int num;
  for (num = 2992; num < 10000; num++) {
    int copyNum = num;
    int sumOfDec = 0;
    while (copyNum) {
      sumOfDec += copyNum%10;
      copyNum /= 10;
    }

    copyNum = num;
    int sumOfHex = 0;
    while (copyNum) {
      sumOfHex += copyNum%16;
      copyNum /= 16;
    }

    copyNum = num;
    int sumOfDuo = 0;
    while (copyNum) {
      sumOfDuo += copyNum%12;
      copyNum /= 12;
    }

    if (sumOfDec == sumOfHex && sumOfHex == sumOfDuo) {
      printf("%d\n", num);
    }
  }
}