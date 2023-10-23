#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int sum_primary = 0;
int sum_secondary = 0;
for (int i = 0; i < size; i++)
{
sum_primary += a[i * size + i];
sum_secondary += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum_primary, sum_secondary);
}
int main(void)
{
int c3[3][3] = {{0, 1, 5}, {10, 11, 12}, {1000, 101, 102}};
int c5[5][5] = {{0, 1, 5, 12124, 1234}, {10, 11, 12, 123521, 12512}, {1000, 101, 102, 12545, 214543435}, {100, 1012451, 11102, 12545, 214543435}, {10, 12401, 10452, 11542545, 1214543435}};
print_diagsums((int *)c3, 3);
print_diagsums((int *)c5, 5);
return (0);
}

