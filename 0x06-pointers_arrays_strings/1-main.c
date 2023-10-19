#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    for (int i = 0; s1[i] != '\0'; i++)
        _putchar(s1[i]);

    for (int i = 0; s2[i] != '\0'; i++)
        _putchar(s2[i]);

    ptr = _strncat(s1, s2, 1);

    for (int i = 0; s1[i] != '\0'; i++)
        _putchar(s1[i]);

    for (int i = 0; s2[i] != '\0'; i++)
        _putchar(s2[i]);

    while (*ptr)
    {
        _putchar(*ptr);
        ptr++;
    }

    ptr = _strncat(s1, s2, 1024);

    for (int i = 0; s1[i] != '\0'; i++)
        _putchar(s1[i]);

    for (int i = 0; s2[i] != '\0'; i++)
        _putchar(s2[i]);

    while (*ptr)
    {
        _putchar(*ptr);
        ptr++;
    }

    return (0);
}

