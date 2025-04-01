#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - Prints all elements of a doubly linked list
* @h: Pointer to the head of the list
*
* Return: Number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0; /* Initialize a counter for the nodes */

while (h != NULL) /* Traverse through the list */
{
printf("%d\n", h->n); /* Print the value of the current node */
h = h->next;         /* Move to the next node in the list */
count++;             /* Increment the node counter */
}

return count; /* Return the total number of nodes */
}
