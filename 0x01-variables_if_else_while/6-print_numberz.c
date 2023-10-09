#include <stdio.h>
int main(void)
{
    int number = 0;

    while (number <= 9)
    {
        putchar(number + 48);
	number++;
    }

    putchar( '\n');

    return (0);

}
