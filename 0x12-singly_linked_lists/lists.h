#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> 
/* Include this line to fix the 'unknown type name size_t' error */

/* Struct definition for list node */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
/* Add prototypes for other functions here */

int _putchar(char c);

#endif /* LISTS_H */

