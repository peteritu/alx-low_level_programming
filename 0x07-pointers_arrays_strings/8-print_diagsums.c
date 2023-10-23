#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix as a 1D array.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum_main = 0;
int sum_secondary = 0;
for (i = 0; i < size; i++)
{
sum_main += a[i * size + i]; /* Main diagonal */
sum_secondary += a[i * size + (size - 1 - i)]; /* Secondary diagonal */
}
putchar(sum_main / 10 + '0');
putchar(sum_main % 10 + '0');
putchar(',');
putchar(' ');
putchar(sum_secondary / 10 + '0');
putchar(sum_secondary % 10 + '0');
putchar('\n');
}

