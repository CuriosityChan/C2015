#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  scanf("%d", &num);
  int binary[8] = {0};
  int positiveNum = abs(num);
  int index = 7;
  // 先把数的绝对值转为2进制存储
  while (positiveNum) {
    binary[index--] = positiveNum%2;
    positiveNum /= 2;
  }
  
  int i;
  if (num < 0) {
    // 取反
    for (i = 0; i < 8; i++) {
      binary[i] = 1-binary[i];
    }

    // 加一
    binary[7]++;
    for (i = 7; i > 0; i--) {
      if (binary[i] == 2) {
        binary[i-1]++;
        binary[i] = 0;
      }
    }
    if (binary[0] == 2) {
      binary[0] = 0;
    }
  }
  for (i = 0; i < 8; i++) {
    printf("%d", binary[i]);
  }
  printf("\n");
}