#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to the number to modify.
* @index: Index of the bit to set (starting from 0).
*
* Return: 1 if successful, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Validate the index: ensure it's within the range of bits */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Create a mask with a 0 at the specified index and 1 elsewhere */
*n &= ~(1UL << index);

return (1);
}
