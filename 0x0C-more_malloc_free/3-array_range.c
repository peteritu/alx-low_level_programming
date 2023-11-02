#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value for the range (inclusive).
 * @max: The maximum value for the range (inclusive).
 *
 * Return: (Pointer) to the newly created array, or (NULL) on failure.
 */
int *array_range(int min, int max)
{
int size, i;
int *result;

if (min > max)
return (NULL);

size = max - min + 1;
result = (int *)malloc(size *sizeof(int));

if (result == NULL)
return (NULL);

for (i = 0; i < size; i++)
result[i] = min + i;

return (result);
}

