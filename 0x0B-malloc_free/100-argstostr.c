#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *result;
int total_length;
int current_position;
int i;

if (ac == 0 || av == NULL)
return (NULL);

total_length = 0;
current_position = 0;

for (i = 0; i < ac; i++)
{
int arg_length = 0;
while (av[i][arg_length] != '\0')
{
arg_length++;
}
total_length += arg_length + 1; /* +1 for the newline character */
}

result = (char *)malloc(total_length *sizeof(char));
if (result == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
int arg_length = 0;
while (av[i][arg_length] != '\0')
{
result[current_position] = av[i][arg_length];
current_position++;
arg_length++;
}
result[current_position] = '\n';
current_position++;
}
result[current_position] = '\0'; /* Null-terminate the string */

return (result);
}

