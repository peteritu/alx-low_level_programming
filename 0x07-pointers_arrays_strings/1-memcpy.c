#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;

while (n--)
{
*d++ = *s++;
}

return (dest);
}

