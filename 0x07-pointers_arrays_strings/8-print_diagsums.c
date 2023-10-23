#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;

for (int i = 0; i < size; i++)
{
/* Sum of the main diagonal (top-left to bottom-right) */
sum1 += a[i * size + i];
/* Sum of the secondary diagonal (top-right to bottom-left) */
sum2 += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", sum1, sum2);
}

int main(void)
{
int c3[3][3] = {
{0, 1, 5},
{10, 11, 12},
{1000, 101, 102},
};
int c5[5][5] = {
{0, 1, 5, 12124, 1234},
{10, 11, 12, 123521, 12512},
{1000, 101, 102, 12545, 214543435},
{100, 1012451, 11102, 12545, 214543435},
{10, 12401, 10452, 11542545, 1214543435},
};

print_diagsums((int *)c3, 3);
print_diagsums((int *)c5, 5);

return (0);
}

