#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase and then in
 * uppercase, followed by a new line only by the putchar function three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

/* Print lowercase alphabet */
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

/* Print uppercase alphabet */
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}

/* Print the new line character */
putchar('\n');

return (0);
}
