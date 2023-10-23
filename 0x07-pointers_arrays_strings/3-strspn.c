#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing characters to match against.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;
int match;

for (i = 0; s[i] != '\0'; i++)
{
match = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
match = 1;
break;
}
}

if (match == 0)
{
break; /* Stop if the character in s is not in accept */
}
}

return (count);
}

