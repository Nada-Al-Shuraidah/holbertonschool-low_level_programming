#include "main.h"

/**
* more_numbers - Prints numbers from 0 to 14, ten times,followed by a new line.
*/
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j / 10 > 0) /* Check if the number is greater than 9 */
{
_putchar((j / 10) + '0'); /* Print the tens digit */
}
_putchar((j % 10) + '0'); /* Print the units digit */
}
_putchar('\n');
}
}
