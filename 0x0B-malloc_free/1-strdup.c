#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: The input string to duplicate
 *
 * Return: A pointer to the new duplicate string, or NULL on failure
 */
char *_strdup(char *str)
{
char *dup;
int len = 0, i;

if (!str)
return (NULL);

while (str[len])
len++;

dup = (char *)malloc(len + 1);

if (!dup)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}

