#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int result;

    result = mul(98, 1024);
    write(1, itoa(result), strlen(itoa(result)));
    write(1, "\n", 1);

    result = mul(-402, 4096);
    write(1, itoa(result), strlen(itoa(result)));
    write(1, "\n", 1);

    return (0);
}

char *itoa(int num)
{
    static char str[11];
    int i = 0;

    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    if (num < 0) {
        str[i++] = '-';
        num = -num;
    }

    int temp = num;
    int numDigits = 0;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    for (int j = 0; j < numDigits; j++) {
        str[i + numDigits - 1 - j] = '0' + (num % 10);
        num /= 10;
    }
    str[i + numDigits] = '\0';

    return str;
}

