#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of single-digit
 * numbers, separated by a comma and a space, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0'); /* Convert integer to its corresponding ASCII character */
if (num < 9)
{
putchar(','); /* Print the comma */
putchar(' '); /* Print the space */
}
}
putchar('\n'); /* Print the new line character */

return (0);
}
