#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char *ptr = str;

while (*ptr)
{
if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
{
char base = (*ptr >= 'a') ? 'a' : 'A';
*ptr = ((*ptr - base + 13) % 26) + base;
}
ptr++;
}

return (str);
}

