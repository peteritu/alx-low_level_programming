#include <stddef.h>

/**
 * int_index - Search for an integer in an array.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to compare values.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}

