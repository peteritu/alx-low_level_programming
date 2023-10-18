#include "main.h"
#include <unistd.h> // Include the <unistd.h> header for write

/**
 * _putchar - Custom function to print a character to stdout
 * @c: The character to print
 */
void _putchar(char c)
{
    write(1, &c, 1);
}

/**
 * main - Entry point, check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[98];
char *ptr;
int i;

for (i = 0; i < 98 - 1; i++)
{
s1[i] = '*';
}
s1[i] = '\0';

_putchar('\n');
ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
_putchar('\n');
_putchar('\n');
ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);

for (i = 0; i < 98; i++)
{
if (i % 10)
{
_putchar(' ');
}
if (!(i % 10) && i)
{
_putchar('\n');
}
char hex_char = s1[i] >= 16 ? 'A' + s1[i] - 16 : '0' + s1[i];
_putchar('0');
_putchar('x');
_putchar(hex_char);
}
_putchar('\n');
return (0);
}

