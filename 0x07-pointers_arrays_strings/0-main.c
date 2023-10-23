#include "main.h"
#include <unistd.h>
#include <stdio.h> /* Include <stdio.h> for sprintf */

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    char hex[5]; /* To format the hexadecimal value */

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            write(1, " ", 1);
        }
        if (!(i % 10) && i)
        {
            write(1, "\n", 1);
        }
        sprintf(hex, "0x%02x", buffer[i]);
        write(1, hex, 4);
        i++;
    }
    write(1, "\n", 1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    write(1, "-------------------------------------------------\n", 49);
    simple_print_buffer(buffer, 98);
    return (0);
}

