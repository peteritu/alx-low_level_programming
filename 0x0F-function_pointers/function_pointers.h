#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Structure to define an operation
 * @op: The operator
 * @f: The function to perform the operation
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS_H */

