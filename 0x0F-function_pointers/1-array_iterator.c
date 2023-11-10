#include "function_pointers.h"

/**
* array_iterator - Execute function on each element of an array.
* @array: Array of integers.
* @size: Size of the array.
* @action: Function to execute on each element.
*
* Description: If 'array' and 'action' are not NULL, this function iterates
* through the array and applies the provided 'action' function to each element.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

