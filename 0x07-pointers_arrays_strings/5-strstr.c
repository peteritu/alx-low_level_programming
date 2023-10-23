#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *sub;
char *match;
while (*haystack)
{
sub = haystack;
match = needle;
while (*match && *sub == *match)
{
sub++;
match++;
}
if (*match == '\0')
return (haystack);
haystack++;
}
return (NULL);
}

