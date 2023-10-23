#include "main.h"

/* Helper function to print a single digit */
void print_digit(int n)
{
_putchar(n + '0');
}

/**
* print_number - Main recursive function to print an integer
* @n: The integer to be printed
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10 != 0)
{
print_number(n / 10);
}
print_digit(n % 10);
}

