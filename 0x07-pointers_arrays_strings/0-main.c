#include "main.h"
#include <stdio.h>
#include <unistd.h>  /* Include the <unistd.h> header for the write function */

/* Function to print a buffer in hexadecimal format */
void simple_print_buffer(char *buffer, unsigned int size);

/* Main function to test _memset */
int main(void)
{
char buffer[98] = {0x00};

simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 95);
write(1, "-------------------------------------------------\n", 48); /* Include the write function */
simple_print_buffer(buffer, 98);
return (0);
}

/* Rest of the code remains the same */

