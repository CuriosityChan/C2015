#include <stdio.h>
#include <stdbool.h>

int main() {
  int t;
  scanf("%d", &t);
  // nums是用来存储结果的数组
  int nums[100];
  while (t--) {
    int n;
    scanf("%d", &n);
    int index = 0;
    int i, j;
    for (i = 0; i < n; i++) {
      bool isDistinct = true;
      int temp;
      scanf("%d", &temp);
      for (j = 0; j < index; j++) {
        if (nums[j] == temp) {
          isDistinct = false;
          break;
        }
      }
      if (isDistinct) {
        nums[index++] = temp;
      }
    }
    for (i = 0; i < index-1; i++) {
      printf("%d ", nums[i]);
    }
    printf("%d\n", nums[index-1]);
  }
}

