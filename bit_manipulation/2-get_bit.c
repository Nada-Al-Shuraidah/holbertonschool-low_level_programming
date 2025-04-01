#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to search.
* @index: The index of the bit to get (starting from 0).
*
* Return: The value of the bit at index (0 or 1),
*         or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
/* Validate the index: ensure it is within the range of bits */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Shift the bit at the specified index to the LSB position and return it */
return ((n >> index) & 1);
}
