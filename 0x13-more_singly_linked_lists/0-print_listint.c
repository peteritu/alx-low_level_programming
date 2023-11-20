#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 */
void print_listint(const listint_t *h)
{
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
}
}

