#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int numCount[10] = {0};
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
      int temp;
      scanf("%d", &temp);
      numCount[temp]++;
    }
    for (i = 0; i < 10; i++) {
      if (numCount[i] != 0) {
        printf("%d %d\n", i, numCount[i]);
      }
    }
  }
}