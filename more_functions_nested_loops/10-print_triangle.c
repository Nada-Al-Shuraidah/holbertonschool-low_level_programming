#include "main.h"

/**
* print_triangle - Prints a right-aligned triangle using '#'
* @size: The size of the triangle
*
* Return: void
*/
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++) /* Loop for each row */
{
for (j = 1; j <= size; j++) /* Loop for spaces and '#' */
{
if (j <= size - i)
_putchar(' '); /* Print spaces */
else
_putchar('#'); /* Print '#' */
}
_putchar('\n'); /* Move to the next line */
}
}
