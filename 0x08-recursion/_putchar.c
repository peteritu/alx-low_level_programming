#include <unistd.h>

/* Definition for the _putchar function */
int _putchar(char c)
{
    return write(1, &c, 1);
}

