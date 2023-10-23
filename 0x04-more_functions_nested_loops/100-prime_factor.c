#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
unsigned long largest_prime_factor(unsigned long n)
{
unsigned long largest = 0;

while (n % 2 == 0)
{
    largest = 2;
    n = n / 2;
}

for (unsigned long i = 3; i <= sqrt(n); i += 2)
{
    while (n % i == 0)
    {
        largest = i;
        n = n / i;
    }
}

if (n > 2)
    largest = n;

return largest;
}

int main(void)
{
unsigned long number = 612852475143;
unsigned long result = largest_prime_factor(number);

printf("%lu\n", result);

return (0);
}

