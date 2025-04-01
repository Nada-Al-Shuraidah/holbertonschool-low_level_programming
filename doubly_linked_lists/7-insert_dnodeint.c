#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Double pointer to the head of the list
* @idx: Index where the new node should be added (starting from 0)
* @n: Value for the new node
*
* Return: Address of the new node, or NULL if it fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int count = 0;

if (h == NULL) /* Check if the head pointer is NULL */
return (NULL);

/* Special case: insert at the beginning */
if (idx == 0)
return (add_dnodeint(h, n));

temp = *h;
while (temp != NULL && count < idx - 1) /* Traverse to the node before idx */
{
temp = temp->next;
count++;
}

if (temp == NULL || (temp->next == NULL && count + 1 < idx))
return (NULL); /* If index is out of bounds */

/* Special case: insert at the end */
if (temp->next == NULL && count + 1 == idx)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t)); /* Allocate memory for the new node */
if (new_node == NULL) /* Check if malloc failed */
return (NULL);

new_node->n = n; /* Set value for the new node */
new_node->next = temp->next; /* Link new node to next node */
new_node->prev = temp; /* Link new node to previous node */

if (temp->next != NULL) /* Update the next node's previous pointer */
temp->next->prev = new_node;

temp->next = new_node; /* Link the previous node to the new node */

return (new_node); /* Return the address of the new node */
}
