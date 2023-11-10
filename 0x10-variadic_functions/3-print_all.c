#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 *           c: char
 *           i: integer
 *           f: float
 *           s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char current_format;

format_t formats[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_str},
{0, NULL} /* Terminate the array */
};

va_start(args, format);

while (format && format[i])
{
current_format = format[i];

for (int j = 0; formats[j].type != 0; j++)
{
if (formats[j].type == current_format)
{
formats[j].f(args);

if ((format[i + 1] != '\0') &&
(current_format == 'c' || current_format == 'i' ||
current_format == 'f' || current_format == 's'))
printf(", ");

break;
}
}

i++;
}

va_end(args);
printf("\n");
}

/**
 * print_char - Print a character
 * @args: The va_list containing the character to print
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an integer
 * @args: The va_list containing the integer to print
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float
 * @args: The va_list containing the float to print
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_str - Print a string
 * @args: The va_list containing the string to print
 */
void print_str(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

