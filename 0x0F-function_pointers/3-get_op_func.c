#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Get the appropriate function for the given operator.
 * @s: The operator.
 *
 * Return: A pointer to the appropriate function or NULL if not recognized.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}

printf("Error\n");
exit(99);
}

