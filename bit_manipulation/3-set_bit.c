#include "main.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index.
* @n: Pointer to the number to modify.
* @index: Index of the bit to set (starting from 0).
*
* Return: 1 if successful, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
/* Validate the index: ensure it's within the range of bits */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Use bitwise OR to set the bit at the given index */
*n |= (1UL << index);

return (1);
}
