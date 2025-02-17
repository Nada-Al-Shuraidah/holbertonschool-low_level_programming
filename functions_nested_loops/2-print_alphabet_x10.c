#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * each followed by a new line.
 *
 * Description: This function uses the _putchar function to print the alphabet
 * in lowercase 10 times, each followed by a new line.
 */
void print_alphabet_x10(void)
{
char ch;
int i;

for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n'); /* Print the new line character */
}
}
