#include <stdio.h>

void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
if (month >= 2 && day >= 60)
{
if (day == 60 && month == 2)
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
day++;
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
}
else
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
}
