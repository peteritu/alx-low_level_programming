#include "main.h"

/**
 * _strncat - Concatenates two strings with a maximum of n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
char *src_ptr = src;

while (*dest_ptr)
dest_ptr++;

while (n > 0 && *src_ptr)
{
*dest_ptr = *src_ptr;
dest_ptr++;
src_ptr++;
n--;
}

*dest_ptr = '\0';

return dest;
}

