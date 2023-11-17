#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("[%lu] %s\n", h->str ? strlen(h->str) : 0, h->str ? h->str : "(nil)");
h = h->next;
count++;
}

return (count);
}

