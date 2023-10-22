#include "main.h"
#include <unistd.h>

/**
 * main - Check the _isupper function.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;
    int result;

    c = 'A';
    result = _isupper(c);
    write(1, &c, 1); /* Writes the character to stdout */
    write(1, ": ", 2); /* Writes a colon and a space */
    if (result == 1)
        write(1, "1\n", 2); /* Writes "1" followed by a newline */
    else
        write(1, "0\n", 2); /* Writes "0" followed by a newline */

    c = 'a';
    result = _isupper(c);
    write(1, &c, 1); /* Writes the character to stdout */
    write(1, ": ", 2); /* Writes a colon and a space */
    if (result == 1)
        write(1, "1\n", 2); /* Writes "1" followed by a newline */
    else
        write(1, "0\n", 2); /* Writes "0" followed by a newline */

    return (0);
}

