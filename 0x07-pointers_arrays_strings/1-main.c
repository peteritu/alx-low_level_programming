#include "main.h"
#include <stdio.h> /* Include the stdio.h header for printf */

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * print_hex_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void print_hex_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            _putchar(' ');
        }
        if (!(i % 10) && i)
        {
            _putchar('\n');
        }
        print_hex_byte(buffer[i]);
        i++;
    }
    _putchar('\n');
}

/**
 * print_hex_byte - prints a byte in hex format
 * @b: the byte to print
 *
 * Return: Nothing.
 */
void print_hex_byte(char b)
{
    char hex_digits[] = "0123456789abcdef";

    _putchar('0');
    _putchar('x');
    _putchar(hex_digits[(b >> 4) & 0x0F]);
    _putchar(hex_digits[b & 0x0F]);
}

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    print_hex_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    print_hex_buffer(buffer, 98);
    return (0);
}

