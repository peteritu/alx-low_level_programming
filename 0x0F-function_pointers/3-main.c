#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, otherwise exits with a status code
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char *operator;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    operator = argv[2];
    num2 = atoi(argv[3]);

    if ((*operator == '/' || *operator == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = get_op_func(operator)(num1, num2);

    printf("%d\n", result);

    return (0);
}

