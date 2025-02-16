#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 * followed by a new line using only the putchar function three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char ch;

/* Print numbers 0-9 */
for (num = 0; num < 10; num++)
{
putchar(num + '0'); /* Convert integer to its corresponding ASCII character */
}

/* Print letters a-f */
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}

/* Print the new line character */
putchar('\n');

return (0);
}
