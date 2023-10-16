#include "main.h"
#include "main.h"
#include "_putchar.h" // Include the _putchar.h header

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
char c;

while (*str)
{
c = *str++;
_putchar(c);
}
_putchar('\n');
}
