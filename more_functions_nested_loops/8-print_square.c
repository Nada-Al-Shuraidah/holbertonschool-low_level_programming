#include "main.h"

/**
* print_square - Prints a square using the character '#'
* @size: The size of the square
*
* Return: void
*/
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++) /* Loop for each row */
{
for (j = 0; j < size; j++) /* Loop for each column */
{
_putchar('#');
}
_putchar('\n'); /* Move to the next line */
}
}
