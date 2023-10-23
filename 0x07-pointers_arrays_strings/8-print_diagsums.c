#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size);

int main(void)
{
int matrix[3][3] = {
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};
int size = 3;
int flat_matrix[size * size];
int i, j, k = 0;

for (i = 0; i < size; i++) {
for (j = 0; j < size; j++) {
flat_matrix[k] = matrix[i][j];
k++;
}
}

print_diagsums(flat_matrix, size);

return (0);
}

void print_diagsums(int *a, int size)
{
int i;
int sum_main = 0;
int sum_secondary = 0;

for (i = 0; i < size; i++) {
sum_main += a[i * size + i]; /* Main diagonal */
sum_secondary += a[i * size + (size - 1 - i)]; /* Secondary diagonal */
}

printf("Sum of the main diagonal: %d\n", sum_main);
printf("Sum of the secondary diagonal: %d\n", sum_secondary);
}

