#include "main.h"

/**
* rot13 - Encodes a string using ROT13.
* @s: The string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char *rot13(char *s)
{
char *result = s;

while (*s)
{
if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
{
char base = (*s >= 'a' && *s <= 'z') ? 'a' : 'A';
*s = ((*s - base + 13) % 26) + base;
}
s++;
}

return (result);
}

