#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Singly linked list structure
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Pointer to the next node
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/* Function prototypes for list functions */
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);

#endif /* LISTS_H */

