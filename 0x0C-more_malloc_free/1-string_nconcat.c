#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with the first n characters of s2.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: A pointer to a newly allocated space in memory containing the
 * concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenated;
unsigned int s1_len = 0, s2_len = 0;
unsigned int i, j;

/* Check if s1 is NULL and treat it as an empty string */
if (s1 == NULL)
s1 = "";

/* Calculate the length of s1 and s2 */
while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;

/* Use the entire s2 if n is greater or equal to its length */
if (n >= s2_len)
n = s2_len;

/* Allocate memory for the concatenated string */
concatenated = (char *)malloc(s1_len + n + 1);
if (concatenated == NULL)
return (NULL);

/* Copy s1 to the concatenated string */
for (i = 0; i < s1_len; i++)
concatenated[i] = s1[i];

/* Copy the first n characters of s2 to the concatenated string */
for (j = 0; j < n; j++)
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0'; /* Null-terminate the concatenated string */

return (concatenated);
}

