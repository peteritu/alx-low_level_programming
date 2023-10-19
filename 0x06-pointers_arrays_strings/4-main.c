#include "main.h"
#include <stdio.h>

/**
* print_array - Prints the elements of an integer array.
* @a: An array of integers.
* @n: The number of elements in the array.
*/
void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
i++;
}
printf("\n");
}

/**
* main - Entry point of the program.
*
* Return: Always 0.
*/
int main(void)
{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

/* Print the original array */
print_array(a, sizeof(a) / sizeof(int));

/* Reverse the array */
reverse_array(a, sizeof(a) / sizeof(int));

/* Print the reversed array */
print_array(a, sizeof(a) / sizeof(int));

return (0);
}

