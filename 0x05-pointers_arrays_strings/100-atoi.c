#include <limits.h>  /* for INT_MAX and INT_MIN */
#include "main.h"

/**
* _atoi - Converts a string to an integer.
* @s: The input string.
*
* Return: The integer value, or 0 if no valid integer is found.
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

/* Skip leading whitespace */
while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
i++;

/* Handle the sign character */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

/* Convert the string to an integer */
while (s[i] >= '0' && s[i] <= '9')
{
/* Check for overflow */
if (result > (INT_MAX - (s[i] - '0')) / 10)
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}
result = result * 10 + (s[i] - '0');
i++;
}

/* Apply the sign */
return sign * result;
}

