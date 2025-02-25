#include "main.h"

/**
* print_number - Prints an integer using _putchar
* @n: The integer to print
*/
void print_number(int n)
{
if (n < 0) /* Handle negative numbers */
{
_putchar('-');
n = -n;
}

if (n / 10) /* Recursive call to print digits */
print_number(n / 10);

_putchar((n % 10) + '0'); /* Print last digit */
}
