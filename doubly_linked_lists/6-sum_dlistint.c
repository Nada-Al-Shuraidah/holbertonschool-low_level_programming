#include "lists.h"

/**
* sum_dlistint - Calculates the sum of all the data (n) in a doubly linked list
* @head: Pointer to the head of the list
*
* Return: The sum of all the data (n), or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0; /* Initialize the sum to 0 */

while (head != NULL) /* Traverse through the list */
{
sum += head->n; /* Add the value of the current node to the sum */
head = head->next; /* Move to the next node */
}

return (sum); /* Return the calculated sum */
}
