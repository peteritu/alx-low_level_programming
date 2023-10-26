#include "main.h"

/**
 * is_prime_recursive - Check if a number is prime using recursion.
 * @n: The number to be checked.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
if (n <= 1)
return 0;
if (divisor == 1)
return 1;
if (n % divisor == 0)
return 0;

return is_prime_recursive(n, divisor - 1);
}

int is_prime_number(int n)
{
return is_prime_recursive(n, n - 1);
}

