#include "main.h"

/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The number of times tables to print.
*
* Description: If n is greater than 15 or less than 0, function does nothing.
* The output is formatted with proper spacing and alignment.
*/
void print_times_table(int n)
{
int row, col, product;

if (n < 0 || n > 15)
return;

for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
product = row * col;

if (col == 0)
_putchar('0' + product);
else
{
_putchar(',');
_putchar(' ');

if (product < 10)
_putchar(' ');
if (product < 100)
_putchar(' ');

if (product >= 100)
_putchar('0' + (product / 100));
if (product >= 10)
_putchar('0' + ((product / 10) % 10));
_putchar('0' + (product % 10));
}
}
_putchar('\n');
}
}
