#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;
    unsigned int len;
    char num;

    n = _strspn(s, f);

    len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    num = n + '0';

    write(1, s, len);
    write(1, "\nLength of prefix:", 18);
    write(1, &num, 1);
    write(1, "\n", 1);

    return (0);
}

