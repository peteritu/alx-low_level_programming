#include "main.h"

/**
 * main - Entry point. Multiplies two numbers.
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
fprintf(stderr, "Error\n");
return 1;
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = multiply(num1, num2);
printf("%d\n", result);

return 0;
}

/**
 * multiply - Multiplies two integers
 * @num1: The first integer
 * @num2: The second integer
 *
 * Return: The product of num1 and num2
 */
int multiply(int num1, int num2)
{
return num1 * num2;
}

