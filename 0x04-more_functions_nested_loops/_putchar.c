#include <unistd.h>

/**
* _putchar - writes a character to stdout
* @c: The character to write
*
* Return: On success, the number of characters written is returned.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}

