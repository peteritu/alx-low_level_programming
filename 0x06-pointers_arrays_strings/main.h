#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* Function prototype for print_number */
void print_number(int n);

/* Definition of a simple _putchar function */
int _putchar(char c)
{
    return write(1, &c, 1);
}

#endif /* MAIN_H */

