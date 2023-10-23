#include "main.h"

/**
 * _strpbrk - search string for set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to matching byte in `s`, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}

