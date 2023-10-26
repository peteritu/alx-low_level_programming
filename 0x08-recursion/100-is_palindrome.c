#include "main.h"
#include <stddef.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: Pointer to a string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = 0;
int start = 0;

if (s == NULL)
return (1);

while (s[len] != '\0')
len++;

return (is_palindrome_helper(s, start, len - 1));
}

/**
 * is_palindrome_helper - Helper function for is_palindrome
 * @s: Pointer to a string
 * @start: Starting index
 * @end: Ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);

return (is_palindrome_helper(s, start + 1, end - 1));
}

