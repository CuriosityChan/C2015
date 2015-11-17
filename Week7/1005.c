#include <stdio.h>

int main() {
  int year, firstDay, month;
  scanf("%d%d%d", &year, &firstDay, &month);
  char monthName[12][10] = {"January", "February", "March", "April", "May",
                            "June", "July", "August", "September", "October",
                            "November", "December"};
  printf("%s %d\n", monthName[month-1], year);
  printf("     Sun     Mon     Tue     Wed     Thu     Fri     Sat\n");
  
  int day = 0;
  int i;
  for (i = 1; i < month; i++) {
    if (i == 2) {
      if ((year%4 == 0 && year%100 != 0) || year%400 == 0) {
        day += 29;
      } else {
        day += 28;
      }
    } else if (i == 1 || i == 3 || i == 5 || i == 7 ||
          i == 8 || i == 10 || i == 12) {
      day += 31;
    } else {
      day += 30;
    }
  }

  int firstDayOfCurrentMonth = (firstDay+day)%7;
  for (i = 0; i < firstDayOfCurrentMonth; i++) {
    printf("        ");
  }

  int dayOfCurrentMonth;
  i = month;
  if (i == 2) {
    if ((year%4 == 0 && year%100 != 0) || year%400 == 0) {
      dayOfCurrentMonth = 29;
    } else {
      dayOfCurrentMonth = 28;
    }
  } else if (i == 1 || i == 3 || i == 5 || i == 7 ||
             i == 8 || i == 10 || i == 12) {
    dayOfCurrentMonth = 31;
  } else {
    dayOfCurrentMonth = 30;
  }

  for (i = 1; i <= dayOfCurrentMonth; i++) {
    printf("%8d", i);
    if ((i+firstDayOfCurrentMonth)%7 == 0 && i != dayOfCurrentMonth) {
      printf("\n");
    }
  }
  printf("\n");
}
