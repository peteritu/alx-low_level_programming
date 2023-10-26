#include <unistd.h>
#include "main.h"

/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 */
void _putchar(char c)
{
    write(1, &c, 1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    _putchar(r + '0');
    _putchar('\n');

    r = is_palindrome("redder");
    _putchar(r + '0');
    _putchar('\n');

    r = is_palindrome("test");
    _putchar(r + '0');
    _putchar('\n');

    r = is_palindrome("step on no pets");
    _putchar(r + '0');
    _putchar('\n');

    return (0);
}

