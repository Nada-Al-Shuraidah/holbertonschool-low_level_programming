#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _str_len - Computes the length of a string manually.
* @str: Pointer to the string.
*
* Return: Length of the string.
*/
size_t _str_len(const char *str)
{
size_t len = 0;

while (str[len] != '\0')
len++;

return (len);
}

/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Duplicate the string */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

/* Compute the string length using _str_len */
new_node->len = _str_len(str);
new_node->next = NULL;

/* If the list is empty, set the new node as the head */
if (*head == NULL)
{
*head = new_node;
}
else
{
/* Traverse the list to find the last node */
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
/* Update the last node's next pointer to point to the new node */
temp->next = new_node;
}

return (new_node);
}
