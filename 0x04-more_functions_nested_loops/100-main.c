#include "main.h"

int main(void)
{
long long number = 612852475143;
long long largest_prime_factor = -1;

/* Find the largest prime factor */
while (number % 2 == 0)
{
largest_prime_factor = 2;
number /= 2;
}

for (long long i = 3; i <= sqrt(number); i += 2)
{
while (number % i == 0)
{
largest_prime_factor = i;
number /= i;
}
}

if (number > 2)
{
largest_prime_factor = number;
}

char buffer[20];
int index = 0;
long long temp = largest_prime_factor;

/* Handle the case where the largest prime factor is -1 (no prime factor) */
if (temp == -1)
{
buffer[index++] = '0';
}

/* Convert the largest prime factor to a string */
while (temp > 0)
{
buffer[index++] = temp % 10 + '0';
temp /= 10;
}

/* Print the largest prime factor in reverse order */
for (int i = index - 1; i >= 0; i--)
{
_putchar(buffer[i]);
}

_putchar('\n');

return (0);
}

