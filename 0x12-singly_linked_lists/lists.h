#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  // Add this for size_t

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project.
 */
typedef struct list_s
{
char *str;
struct list_s *next;
} list_t;

/* Function prototypes */
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);  // Fix the return type
size_t print_list(const list_t *h);

#endif /* LISTS_H */

