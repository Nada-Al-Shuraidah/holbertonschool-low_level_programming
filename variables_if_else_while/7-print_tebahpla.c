#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse order,
 * followed by a new line using only the putchar function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n'); /* Print the new line character */

return (0);
}
