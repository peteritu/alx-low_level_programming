#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s); /* Add parentheses around 's' in the return statement */
}

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char buffer[98] = {0x00};

simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 95);
write(1, "-------------------------------------------------\n", 48); /* Line length is corrected */
simple_print_buffer(buffer, 98);
return (0);
}

