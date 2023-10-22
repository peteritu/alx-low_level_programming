#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long n = 612852475143;
long divisor = 2;
long largest_prime;

while (n != 0)
{
if (n % divisor != 0)
divisor += 1;
else
{
largest_prime = n;
n = n / divisor;
if (n == 1)
{
_putchar(largest_prime + '0');
break;
}
}
}

_putchar('\n');
return (0);
}

