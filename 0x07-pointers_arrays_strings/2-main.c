#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates the use of the _strchr function,
 * which locates a character in a string.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    return (0);
}

