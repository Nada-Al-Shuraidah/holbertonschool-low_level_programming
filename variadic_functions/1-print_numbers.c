#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Prints numbers followed by a separator and a new line
* @separator: The string to be printed between numbers
* @n: The number of integers passed to the function
*
* Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

/* Initialize the argument list */
va_start(args, n);

for (i = 0; i < n; i++)
{
/* Print each number */
printf("%d", va_arg(args, int));

/* Print the separator if it's not NULL and not the last element */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

/* End the argument list and print a new line */
va_end(args);
printf("\n");
}
