#include "main.h"

/**
* string_toupper - Convert lowercase letters to uppercase in a string.
* @str: The input string.
*
* Return: A pointer to the converted string.
*/
char *string_toupper(char *str)
{
char *ptr = str;

while (*str)
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - 32;
}
str++;
}

return ptr;
}

