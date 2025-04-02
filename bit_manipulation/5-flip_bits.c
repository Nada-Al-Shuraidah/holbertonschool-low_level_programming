#include "main.h"

/**
* flip_bits - Returns the number of bits you would need to flip
*             to convert one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m; /* XOR of the two numbers */
unsigned int count = 0;

/* Count the number of 1s in the XOR result */
while (xor)
{
count += xor & 1; /* Add 1 if the least significant bit is 1 */
xor >>= 1;        /* Shift right to check the next bit */
}

return (count);
}
