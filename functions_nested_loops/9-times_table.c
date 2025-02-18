#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int row, col, result;

/* Outer loop for rows (0 to 9) */
for (row = 0; row < 10; row++)
{
/* Inner loop for columns (0 to 9) */
for (col = 0; col < 10; col++)
{
result = row * col;

/* Print the result, handling the spacing and comma */
if (col != 0)
{
_putchar(',');  /* Print comma between numbers */
_putchar(' ');  /* Print space after comma */
}

if (result < 10)
{
_putchar(' ');  /* Print space for single-digit numbers */
}
/* Print the result as a character */
_putchar(result + '0');
}
/* Move to the next line after each row */
_putchar('\n');
}
}
