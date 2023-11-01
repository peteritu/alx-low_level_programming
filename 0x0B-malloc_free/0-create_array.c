#include <stdlib.h>

/**
 * create_array - Create an array of chars and initialize with a char.
 * @size: Size of the array.
 * @c: Character for initialization.
 *
 * Return: If size is 0 or if memory allocation fails, return NULL.
 *         Otherwise, return a pointer to the allocated array.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
{
return (NULL);
}

array = malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL);
}

i = 0;
while (i < size)
{
array[i] = c;
i++;
}

return (array);
}

