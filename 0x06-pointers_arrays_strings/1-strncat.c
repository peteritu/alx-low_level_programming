/**
* _strncat - Concatenates two strings using at most n bytes from src.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to use from src.
*
* Return: A pointer to the resulting string `dest`.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int src_len = 0;

while (dest[dest_len] != '\0')
dest_len++;

while (src_len < n && src[src_len] != '\0')
src_len++;

for (int i = 0; i < src_len; i++)
{
dest[dest_len] = src[i];
dest_len++;
}

dest[dest_len] = '\0';

return dest;
}

