#include "function_pointers.h"
#include <stddef.h>/* Include the <stddef.h> header for NULL */
/**
 * print_name - Prints a name using a specified printing function.
 * @name: The name to be printed.
 * @f: A function pointer to a function that prints the name.
 *
 * Description: This function takes a name and a function pointer to a
 * function that specifies how the name should be printed. If both name
 * and function pointer are valid, the function will call the specified
 * function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}

