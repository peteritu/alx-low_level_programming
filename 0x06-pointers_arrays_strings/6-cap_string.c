#include <ctype.h>

/**
 * cap_string - Capitalize words in a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i;
int first_char = 1; /* Flag to track the first character in a word */

for (i = 0; str[i] != '\0'; i++)
{
/* Check if the character is a lowercase letter and the previous character is a separator or it's the first character */
if ((str[i] >= 'a' && str[i] <= 'z') && (first_char || (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(') || str[i - 1] == ')' || str[i - 1] == '{'))
{
str[i] = toupper(str[i]);
}

/* Update the flag for the first character in a word */
if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != ',' && str[i] != ';' && str[i] != '.' && str[i] != '!' && str[i] != '?' && str[i] != '"' && str[i] != '(' && str[i] != ')') || str[i] != '{')
{
first_char = 0;
}
else
{
first_char = 1;
}
}

return str;
}

