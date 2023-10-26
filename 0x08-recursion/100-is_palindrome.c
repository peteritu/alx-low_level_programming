#include "main.h"
#include <stddef.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The input string
 *
 * Return: (1) if it's a palindrome, (0) otherwise
 */
int is_palindrome(char *s)
{
char *start = s;
char *end = s;

if (s == NULL)
return (0);

while (*end != '\0')
end++;

end--;

while (start < end)
{
if (*start != *end)
return (0);

start++;
end--;
}

return (1);
}

