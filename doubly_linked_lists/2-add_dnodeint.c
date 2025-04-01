#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a doubly linked list
* @head: Double pointer to the head of the list
* @n: Value for the new node
*
* Return: Address of the new node, or NULL if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t)); /* Allocate memory for new node */
if (new_node == NULL) /* Check if malloc failed */
return (NULL);

new_node->n = n;      /* Set the value of the new node */
new_node->prev = NULL; /* New node has no previous node */
new_node->next = *head; /* New node points to the current head */

if (*head != NULL) /* If list is not empty, update previous head's prev */
(*head)->prev = new_node;

*head = new_node; /* Update the head to point to the new node */

return (new_node); /* Return the address of the new node */
}
