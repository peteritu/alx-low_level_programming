#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @args: A list of arguments.
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an int.
 * @args: A list of arguments.
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: A list of arguments.
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: A list of arguments.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *separator = "";
print_format_t formats[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};

va_start(args, format);

while (format && format[i])
{
j = 0;

while (formats[j].type)
{
if (format[i] == formats[j].type[0])
{
printf("%s", separator);
formats[j].printer(args);
separator = ", ";
break;
}
j++;
}

i++;
}

printf("\n");
va_end(args);
}

