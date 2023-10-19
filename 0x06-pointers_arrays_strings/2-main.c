#include "main.h"
#include <unistd.h>
#include <string.h>

void _putchar(char c)
{
write(1, &c, 1);
}

/**
* main - Entry point
*
* Description: Initializes a character array, copies substrings, and prints
* hexadecimal values of characters.
*
* Return: Always 0.
*/
int main(void)
{
char s1[98];
int i;

for (i = 0; i < 98 - 1; i++)
{
s1[i] = '*';
}
s1[i] = '\0';

_putchar('\n');
strncpy(s1, "First, solve the problem. Then, write the code\n", 97);
_putchar('\n');
_putchar('\n');
strncpy(s1, "First, solve the problem. Then, write the code\n", 97);

for (i = 0; i < 98; i++)
{
char hex_char = s1[i] >= 16 ? 'A' + s1[i] - 16 : '0' + s1[i];
_putchar('0');
_putchar('x');
_putchar(hex_char);

if (i % 10)
{
_putchar(' ');
}
if (!(i % 10) && i)
{
_putchar('\n');
}
}

_putchar('\n');
return (0);
}

