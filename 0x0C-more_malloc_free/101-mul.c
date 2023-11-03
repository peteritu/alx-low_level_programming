#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: (1) if the string contains only digits, (0) otherwise.
 */
int is_valid_number(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
{
return (0);
}
str++;
}
return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: (0) if successful, (98) if arguments are incorrect.
 */
int main(int argc, char *argv[])
{
char *num1_str, *num2_str;
unsigned long num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (98);
}

num1_str = argv[1];
num2_str = argv[2];

if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
{
printf("Error\n");
return (98);
}

/* Convert the input strings to integers */
num1 = strtoul(num1_str, NULL, 10);
num2 = strtoul(num2_str, NULL, 10);

/* Perform the multiplication */
result = num1 * num2;

/* Print the result */
printf("%lu\n", result);

return (0);
}

