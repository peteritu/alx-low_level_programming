#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: This program prints the number of arguments passed into it,
 * followed by a new line. The program excludes the program name itself from
 * the count.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv; /* Silence the unused parameter warning */
printf("%d\n", argc - 1);
return (0);
}

