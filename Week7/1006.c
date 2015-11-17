#include <stdio.h>

int main() {
  int year, firstDay;
  scanf("%d%d", &year, &firstDay);
  char monthName[12][10] = {"January", "February", "March", "April", "May",
    "June", "July", "August", "September", "October",
    "November", "December"};
  char dayName[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
    "Friday", "Saturday"};
  
  int i;
  int month;
  for (month = 1; month <= 12; month++) {
    int day = 0;
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
    printf("%s 1, %d is %s\n", monthName[month-1], year, dayName[firstDayOfCurrentMonth]);
  }
}


