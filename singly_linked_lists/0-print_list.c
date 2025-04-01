#include "lists.h"
#include <stdio.h> /* Include for printf function */

/**
* print_list - Prints all elements of a list_t list
* @h: Pointer to the head of the linked list
*
* Return: Number of nodes in the linked list
*/
size_t print_list(const list_t *h)
{
size_t count = 0; /* Initialize a counter for the nodes */

while (h != NULL) /* Loop through the list while there are nodes */
{
if (h->str == NULL) /* Check if the string is NULL */
printf("[0] (nil)\n"); /* Print [0] (nil) if the string is NULL */
else
printf("[%u] %s\n", h->len, h->str); /* Print length and string if it exists */

h = h->next; /* Move to the next node */
count++;     /* Increment the counter */
}

return (count); /* Return the total number of nodes */
}
