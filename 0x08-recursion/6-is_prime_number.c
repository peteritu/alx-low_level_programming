#include "main.h"

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0); /* 0 and 1 are not prime numbers */

if (n <= 3)
return (1); /* 2 and 3 are prime numbers */

/* Check if n is divisible by 2 or 3 */
if (n % 2 == 0 || n % 3 == 0)
return (0);

/* Check for prime using 6k +/- 1 rule */
for (int i = 5; i * i <= n; i += 6)
{
if (n % i == 0 || n % (i + 2) == 0)
return (0);
}

return (1); /* n is a prime number */
}

