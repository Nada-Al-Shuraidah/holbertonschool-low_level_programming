#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its parameters
* @n: The number of parameters passed to the function
*
* Return: The sum of the parameters. If n == 0, return 0.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

/* Return 0 if no parameters are passed */
if (n == 0)
return (0);

/* Initialize the argument list */
va_start(args, n);

/* Loop through all arguments and calculate the sum */
for (i = 0; i < n; i++)
sum += va_arg(args, int);

/* Clean up the argument list */
va_end(args);

return (sum);
}
