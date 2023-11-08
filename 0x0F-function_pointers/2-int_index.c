#include <stddef.h>

/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to compare values
 *
 * Return: the index of the first element for which the cmp function does not return 0,
 *         -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL || cmp == NULL || size <= 0)
return -1;

for (; i < size; i++)
{
if (cmp(array[i]))
return i;
}

return -1;
}

