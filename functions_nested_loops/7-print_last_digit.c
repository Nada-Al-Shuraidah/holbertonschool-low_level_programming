#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer to get the last digit of.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit = n % 10;  /* Get the last digit */

/* If the number is negative, make the last digit positive */
if (last_digit < 0)
last_digit = -last_digit;

_putchar(last_digit + '0');  /* Print the last digit as a character */
return (last_digit);
}
