#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
*
* Return: Pointer to the resulting string `dest`.
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int src_len = 0;

/* Calculate the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Calculate the length of the source string */
while (src[src_len] != '\0')
{
src_len++;
}

/* Append the source string to the destination string */
for (int i = 0; i < src_len; i++)
{
dest[dest_len + i] = src[i];
}

/* Add a null terminator at the end */
dest[dest_len + src_len] = '\0';

return dest;
}

