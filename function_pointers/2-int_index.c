#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array
* @array: The array of integers
* @size: The number of elements in the array
* @cmp: A pointer to the comparison function
*
* Return:The index of the 1st matching element, or -1 if no match/invalid input
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0) /* If the cmp function returns a non-zero value */
return (i); /* Return the index of the first matching element */
}

return (-1); /* Return -1 if no element matches */
}
