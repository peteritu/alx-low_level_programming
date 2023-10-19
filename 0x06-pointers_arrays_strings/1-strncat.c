#include "main.h"

/**
* _strncat - Concatenate two strings, using at most `n` bytes from src.
* @dest: The destination string.
* @src: The source string to concatenate.
* @n: The maximum number of characters to concatenate.
*
* Return: A pointer to the resulting string `dest`.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;

/* Find the length of dest */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Concatenate up to n characters from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* Null-terminate the result */
dest[dest_len + i] = '\0';

return (dest);
}

