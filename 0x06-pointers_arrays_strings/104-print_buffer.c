#include <stdio.h>

/**
* print_buffer - Prints the content of a buffer with specific formatting.
* @b: The buffer to be printed.
* @size: The number of bytes to print from the buffer.
*/
void print_buffer(char *b, int size)
{
if (size <= 0)
{
printf("\n");
return;
}

int i = 0;
int j;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = i; j < i + 10; j++)
{
if (j % 2 == 0)
printf("%02x", b[j]);
else
printf("%02x ", b[j]);
}

printf(" ");
for (j = i; j < i + 10; j++)
{
if (j < size)
{
if (b[j] >= 32 && b[j] <= 126)
{
printf("%c", b[j]);
}
else
{
printf(".");
}
}
else
{
printf(" ");
}
}

printf("\n");
}
}

