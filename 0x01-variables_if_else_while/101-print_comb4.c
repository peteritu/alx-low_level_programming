#include <stdio.h>

int main(void)
{
    int hundreds, tens, units;

    for (hundreds = 0; hundreds <= 7; hundreds++)
    {
        for (tens = hundreds + 1; tens <= 8; tens++)
        {
            for (units = tens + 1; units <= 9; units++)
            {
                putchar(hundreds + '0');
                putchar(tens + '0');
                putchar(units + '0');

                if (!(hundreds == 7 && tens == 8 && units == 9))
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
