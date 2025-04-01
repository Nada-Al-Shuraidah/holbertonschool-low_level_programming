#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index of a doubly linked list
* @head: Double pointer to the head of the list
* @index: Index of the node that should be deleted (starting from 0)
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int count = 0;

if (head == NULL || *head == NULL) /* Check if the list or head is NULL */
return (-1);

temp = *head;

/* Special case: deleting the first node */
if (index == 0)
{
*head = temp->next; /* Update the head pointer */
if (*head != NULL)  /* Update the new head's prev pointer */
(*head)->prev = NULL;
free(temp); /* Free the old head */
return (1);
}

/* Traverse the list to find the node at (index - 1) */
while (temp != NULL && count < index)
{
temp = temp->next;
count++;
}

if (temp == NULL) /* Index is out of range */
return (-1);

/* Update links to remove the node */
if (temp->prev != NULL)
temp->prev->next = temp->next;

if (temp->next != NULL)
temp->next->prev = temp->prev;

free(temp); /* Free the node */
return (1);
}
