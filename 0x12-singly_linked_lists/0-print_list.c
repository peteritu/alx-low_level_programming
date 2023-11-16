#include <stdio.h>
#include <string.h>  /* Include the string.h header file */
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("[%lu] %s\n", strlen(h->str), h->str);
h = h->next;
count++;
}

return (count);
}

