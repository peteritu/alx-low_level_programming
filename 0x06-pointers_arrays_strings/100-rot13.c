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
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*ptr)
{
int i;
for (i = 0; alphabet[i]; i++)
{
if (*ptr == alphabet[i])
{
*ptr = rot13[i];
break;
}
}
ptr++;
}

return str;
}

