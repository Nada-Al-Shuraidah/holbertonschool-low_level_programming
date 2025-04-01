#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to be printed in binary.
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int started = 0; /* Flag to track when to start printing */

if (n == 0)
{
_putchar('0');
return;
}

while (mask > 0)
{
if ((n & mask) != 0) /* Check if the current bit is 1 */
{
_putchar('1');
started = 1;
}
else if (started) /* Only print 0 after the first 1 is found */
{
_putchar('0');
}
mask >>= 1; /* Shift mask to the right */
}
}
