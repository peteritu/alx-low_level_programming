#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a function.
 * @func: Pointer to the function whose opcodes to print.
 * @num_bytes: Number of bytes to print.
 *
 * Return: None.
 */
void print_opcodes(void (*func)(int, char **), int num_bytes);

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: (0) on success, (1) if incorrect number of arguments,
 * (2) if negative bytes.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes((void (*)(int, char **))main, num_bytes);
return (0);
}

/**
 * print_opcodes - Prints the opcodes of a function.
 * @func: Pointer to the function whose opcodes to print.
 * @num_bytes: Number of bytes to print.
 *
 * Return: None.
 */
void print_opcodes(void (*func)(int, char **), int num_bytes)
{
unsigned char *func_ptr = (unsigned char *)func;
int i;
for (i = 0; i < num_bytes; ++i)
printf("%02x ", func_ptr[i]);
printf("\n");
}

