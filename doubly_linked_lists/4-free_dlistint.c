#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - Frees a doubly linked list
* @head: Pointer to the head of the list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL) /* Traverse through the list */
{
temp = head;      /* Store current node in a temporary pointer */
head = head->next; /* Move to the next node */
free(temp);        /* Free the current node */
}
}
