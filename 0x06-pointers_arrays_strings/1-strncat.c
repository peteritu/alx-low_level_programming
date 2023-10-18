#include "main.h"
#include <stdio.h> // Include the <stdio.h> header for printf

/**
 * _strncat - Concatenates two strings with a maximum of n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n);

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024); // Copying more characters than in s2
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);

    return (0);
}

