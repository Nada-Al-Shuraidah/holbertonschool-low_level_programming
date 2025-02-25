#include "main.h"

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: The string to be printed
 */
void _puts(char *str)
{
while (*str != '\0')  /* Iterate through the string */
{
_putchar(*str);    /* Print each character */
str++;             /* Move to the next character */
}
_putchar('\n');  /* Print the newline character */
}
