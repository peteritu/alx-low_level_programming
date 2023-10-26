#include "main.h"

/**
 * find_sqrt - Recursive function to find the square root
 * @n: The number to find the square root of
 * @guess: The current guess
 *
 * Return: The natural square root of n, or -1 if not found
 */
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if not found
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 0));
}

