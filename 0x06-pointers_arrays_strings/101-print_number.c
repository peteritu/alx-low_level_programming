#include "main.h"

/**
* print_number - Prints an integer using _putchar
* @n: The integer to be printed
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');  /* Handle negative numbers */
n = -n;         /* Make it positive for further processing */
}

if (n == 0)
{
_putchar('0');  /* Print 0 */
return;
}

if (n / 10 != 0)
{
print_number(n / 10);  /* Recursively print the remaining digits */
}

_putchar(n % 10 + '0');  /* Print the last digit */
}

