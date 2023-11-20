#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer data
 * @next: points to the next node in the list
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
listint_t *add_nodeint(listint_t **head, const int n);
void print_listint(const listint_t *h);

#endif /* LISTS_H */

