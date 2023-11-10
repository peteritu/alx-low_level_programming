#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_div - Function to divide two numbers
 * @a: First number
 * @b: Second number
 * Return: The result of the operation
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Function to find the modulo of two numbers
 * @a: First number
 * @b: Second number
 * Return: The result of the operation
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

