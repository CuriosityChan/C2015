#include <stdio.h>
#include <stdbool.h>

int main() {
  int nums[20];
  int i, j;
  for (i = 0; i < 20; i++) {
    bool isDuplicate = false;
    scanf("%d", &nums[i]);
    for (j = 0; j < i; j++) {
      if (nums[j] == nums[i]) {
        isDuplicate = true;
      }
    }
    if (!isDuplicate) {
      printf("%d ", nums[i]);
    }
  }
}