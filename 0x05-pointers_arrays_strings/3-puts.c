#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The string to be printed
 */
void _puts(char *str)
{
while (*str)
{
write(1, str, 1); /* Write one character at a time to stdout */
str++;
}
write(1, "\n", 1); /* Write a newline character to stdout */
}
