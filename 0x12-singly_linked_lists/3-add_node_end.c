#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
char *duplicate_str;

if (head == NULL || str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

duplicate_str = strdup(str);
if (duplicate_str == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = duplicate_str;
new_node->len = strlen(duplicate_str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;

last_node->next = new_node;

return (new_node);
}

