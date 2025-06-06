#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* Include for size_t type */

/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: This struct represents a node in a singly linked list
*/
typedef struct list_s
{
char *str;              /* Pointer to a string */
unsigned int len;       /* Length of the string */
struct list_s *next;    /* Pointer to the next node */
} list_t;

/* Prototype for the print_list function */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
