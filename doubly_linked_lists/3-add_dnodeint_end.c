#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a doubly linked list
* @head: Double pointer to the head of the list
* @n: Value for the new node
*
* Return: Address of the new node, or NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

new_node = malloc(sizeof(dlistint_t)); /* Allocate memory for the new node */
if (new_node == NULL) /* Check if malloc failed */
return (NULL);

new_node->n = n;      /* Set the value of the new node */
new_node->next = NULL; /* New node has no next node */

if (*head == NULL) /* If the list is empty */
{
new_node->prev = NULL; /* New node has no previous node */
*head = new_node;      /* Update the head to point to the new node */
return (new_node);
}

temp = *head; /* Start from the head */
while (temp->next != NULL) /* Traverse to the last node */
temp = temp->next;

temp->next = new_node;   /* Update the last node's next pointer */
new_node->prev = temp; /*Set the new node's previous pointer to the last node*/

return (new_node); /* Return the address of the new node */
}
