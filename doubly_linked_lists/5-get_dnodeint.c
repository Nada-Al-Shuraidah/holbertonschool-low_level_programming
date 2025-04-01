#include "lists.h"

/**
* get_dnodeint_at_index - Retrieves the nth node of a doubly linked list
* @head: Pointer to the head of the list
* @index: Index of the node to retrieve (starting from 0)
*
* Return: Pointer to the nth node, or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head != NULL) /* Traverse through the list */
{
if (count == index) /* Check if the current node is the nth node */
return (head);

head = head->next; /* Move to the next node */
count++;           /* Increment the counter */
}

return (NULL); /* Return NULL if the node does not exist */
}
