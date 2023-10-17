#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
int length = 0;
int start = 0;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length + 1) / 2;
}

while (str[start] != '\0')
{
if (str[start] != ' ' && str[start] != '\n')
{
_putchar(str[start]);
}
start++;
}

_putchar('\n');
}
