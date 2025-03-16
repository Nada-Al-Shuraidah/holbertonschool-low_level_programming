#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything, based on the format provided
* @format: A string of characters representing the argument types
*
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *separator = "";

/* Initialize the variadic arguments */
va_start(args, format);

/* Loop through the format string */
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}

/* End the variadic arguments and print a new line */
va_end(args);
printf("\n");
}
