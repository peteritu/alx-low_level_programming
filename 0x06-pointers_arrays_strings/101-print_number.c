#include "main.h"

/**
* print_number - Prints an integer using _putchar
* @n: The integer to be printed
*/
void print_number(int n)
{
char minus = '-';
char digit;

if (n < 0)
{
_putchar(minus);
n = -n;
}

if (n / 10 != 0)
{
print_number(n / 10);
}

digit = (n % 10) + '0';
_putchar(digit);
}

