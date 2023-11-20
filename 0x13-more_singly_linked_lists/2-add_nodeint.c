#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

/* Assign the value 'n' to the new node's 'n' member */
new_node->n = n;

/* Update the 'next' pointer to point to the current head of the list */
new_node->next = *head;

/* Update the 'head' pointer to point to the newly created node */
*head = new_node;

/* Return the address of the new element */
return (new_node);
}

