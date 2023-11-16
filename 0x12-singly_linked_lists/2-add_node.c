#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (head == NULL || str == NULL)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Duplicate the input string using strdup */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node); /* Free the allocated memory in case of strdup failure */
return (NULL);
}

/* Set the new node's next to the current head of the list */
new_node->next = *head;

/* Update the head to point to the new node */
*head = new_node;

return (new_node);
}

