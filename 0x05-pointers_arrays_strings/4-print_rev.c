#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
int length = 0;
int i; /* Declare the variable here */

while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--) /* Use the variable here */
{
putchar(s[i]);
}

putchar('\n');
}
