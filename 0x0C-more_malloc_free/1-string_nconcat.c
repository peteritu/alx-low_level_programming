#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
char *concatenated;
unsigned int i, j;

/* Check if s1 is NULL and treat it as an empty string */
if (s1 == NULL)
s1 = "";

/* Get the length of s1 and s2 */
while (s1[len1])
len1++;
while (s2[len2])
len2++;

/* Use the entire s2 if n is greater or equal to its length */
if (n >= len2)
n = len2;

/* Allocate memory for the concatenated string */
concatenated = (char *)malloc(len1 + n + 1);
if (concatenated == NULL)
return (NULL); /* Memory allocation failed */

/* Copy s1 to concatenated */
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

/* Copy the first n characters of s2 to concatenated */
for (j = 0; j < n; j++)
concatenated[i + j] = s2[j];

/* Add a null terminator to the end */
concatenated[i + j] = '\0';

return (concatenated);
}

