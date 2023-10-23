#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory area with
 * @n: number of bytes to be filled with the constant byte
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n > 0)
{
*n-- = b;
}
return (ptr);
}

