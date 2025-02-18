#include "main.h"

/**
* sum_multiples - Computes the sum of multiples of 3 or 5 below 1024.
*
* Return: The sum of the multiples.
*/
int sum_multiples(void)
{
int sum = 0;  /* Declarations INSIDE the function */
int i;        /* Declarations INSIDE the function */

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
return (sum);
}

/**
* print_number - Prints an integer.
* @n: The integer to print.
*/
void print_number(int n)
{
unsigned int num;

if (n < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}

if (num / 10)
{
print_number(num / 10);
}

_putchar((num % 10) + '0');
}

int main(void)
{
int sum = sum_multiples();
print_number(sum);
_putchar('\n');
return (0);
}
