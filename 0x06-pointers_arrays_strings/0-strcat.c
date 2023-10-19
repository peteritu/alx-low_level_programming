#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string to append to dest.
*
* Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0'; /* Add a null terminator at the end */

return (ptr);  /* Return a pointer to the resulting string dest */
}

