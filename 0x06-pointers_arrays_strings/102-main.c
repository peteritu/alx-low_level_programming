#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program to demonstrate the Betty coding style and documentation style.
 *
 * Return: Always 0
 */
int main(void)
{
int p[5];

p[0] = 98;
*(p + 2) = 98;

printf("a[2] = %d\n", p[2]);

return (0);
}

