#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5] = {98, 198, 298, 398, 498};
int *p;

p = a;

/* Add the line to print a[2] = 98, followed by a new line */
printf("a[2] = %d\n", *(p + 2));

return (0);
}

