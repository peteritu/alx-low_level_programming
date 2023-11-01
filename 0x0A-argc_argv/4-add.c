#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_integer - Checks if a string is a positive integer
 * @str: The string to check
 *
 * Return: 1 if the string is a positive integer, 0 otherwise
 */
int is_positive_integer(const char *str)
{
if (*str == '\0')
return (0);

while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if the program runs successfully, 1 in case of an error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_positive_integer(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}

