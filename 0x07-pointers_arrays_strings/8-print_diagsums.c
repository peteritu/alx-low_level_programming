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

for (int i = 0; i < size; i++)
{
sum_primary += a[i * size + i];               /* Sum of the main diagonal */
sum_secondary += a[i * size + (size - i - 1)]; /* Sum of the secondary diagonal */
}

printf("%d, %d\n", sum_primary, sum_secondary);
}

