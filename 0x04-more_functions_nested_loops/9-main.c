#include "main.h"

/**
 * main - Entry point for Fizz-Buzz program.
 *
 * Description:
 * This program prints numbers from 1 to 100, following the Fizz-Buzz rules.
 * For multiples of 3, it prints "Fizz." For multiples of 5, it prints "Buzz."
 * For numbers that are multiples of both 3 and 5, it prints "FizzBuzz."
 * The numbers and words are separated by spaces and followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++) {
if (i % 3 == 0) {
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
if (i % 5 == 0) {
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
if (i % 3 != 0 && i % 5 != 0) {
int j = i;
if (j >= 10) {
_putchar(j / 10 + '0');
j %= 10;
}
_putchar(j + '0');
}
if (i < 100) {
_putchar(' ');
}
}

_putchar('\n');
return (0);
}

