#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase, followed by
 * a new line, excluding the letters 'q' and 'e' using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar('\n'); /* Print the new line character */
return (0);
}
