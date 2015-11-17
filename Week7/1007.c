#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int max, secondMax;
    scanf("%d%d", &max, &secondMax);
    if (secondMax > max) {
      int temp = secondMax;
      secondMax = max;
      max = temp;
    }
    int i;
    for (i = 2; i < n; i++) {
      int temp;
      scanf("%d", &temp);
      if (temp > max) {
        secondMax = max;
        max = temp;
      } else if (temp > secondMax) {
        secondMax = temp;
      }
    }
    printf("%d\n", secondMax);
  }
}