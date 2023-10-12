#include "main.h"
void print_alphabet_x10(void); /* Function prototype for print_alphabet_x10 */

/**
* print_alphabet - Prints the lowercase alphabet followed by a new line
*/
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
