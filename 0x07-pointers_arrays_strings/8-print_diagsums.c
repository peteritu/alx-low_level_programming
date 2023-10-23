#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
int sum_primary = 0;
int sum_secondary = 0;
int i;

for (i = 0; i < size; i++)
{
sum_primary += a[i * size + i];
sum_secondary += a[i * size + (size - i - 1)];
}

printf("%d, %d\n", sum_primary, sum_secondary);
}

