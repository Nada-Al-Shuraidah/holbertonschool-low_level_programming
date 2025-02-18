#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints all natural numbers from n to 98.
* @n: The starting number.
*
* Description: Numbers are printed in order, separated by a comma and a space.
* The last number printed is 98, followed by a newline.
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
}
printf("\n");
}
