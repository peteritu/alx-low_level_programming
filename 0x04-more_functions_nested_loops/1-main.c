#include "main.h"
#include <unistd.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;
    int result;

    c = '0';
    result = _isdigit(c);

    /* Write the character, colon, and the result to stdout */
    write(1, &c, 1);
    write(1, ": ", 2);
    if (result == 1)
        write(1, "1\n", 2);
    else
        write(1, "0\n", 2);

    c = 'a';
    result = _isdigit(c);

    /* Write the character, colon, and the result to stdout */
    write(1, &c, 1);
    write(1, ": ", 2);
    if (result == 1)
        write(1, "1\n", 2);
    else
        write(1, "0\n", 2);

    return (0);
}

