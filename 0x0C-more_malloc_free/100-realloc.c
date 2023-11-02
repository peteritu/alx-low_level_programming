#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: On success, returns a pointer to the newly allocated memory block.
 * On failure, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

if (new_size == old_size)
return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

if (new_size < old_size)
old_size = new_size;

for (i = 0; i < old_size; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);

free(ptr);
return (new_ptr);
}

