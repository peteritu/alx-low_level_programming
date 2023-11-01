#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int length1 = 0, length2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1])
length1++;
while (s2[length2])
length2++;

concatenated = (char *)malloc(length1 + length2 + 1);

if (concatenated == NULL)
return (NULL);

for (i = 0; i < length1; i++)
concatenated[i] = s1[i];
for (i = 0; i < length2; i++)
concatenated[length1 + i] = s2[i];

concatenated[length1 + length2] = '\0';

return (concatenated);
}

