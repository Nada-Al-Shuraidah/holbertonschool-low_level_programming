#include "main.h"

/**
* print_diagonal - Draws a diagonal line using '\'
* @n: Number of times '\' should be printed
*
* Return: void
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' '); /* Print spaces */
}
_putchar('\\'); /* Print '\' */
_putchar('\n'); /* Move to the next line */
}
}
