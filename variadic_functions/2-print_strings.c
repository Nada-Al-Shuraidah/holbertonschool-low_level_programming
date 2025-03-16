#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings, followed by a new line
* @separator: The string to be printed between the strings
* @n: The number of strings passed to the function
*
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

/* Initialize the variadic argument list */
va_start(args, n);

for (i = 0; i < n; i++)
{
/* Get the next string argument */
str = va_arg(args, char *);

/* Print the string or (nil) if it's NULL */
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

/* Print the separator if it's not NULL and not the last element */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

/* Clean up and print a new line */
va_end(args);
printf("\n");
}
