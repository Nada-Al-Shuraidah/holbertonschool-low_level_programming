#include <stddef.h> /* For NULL definition */
#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars.
*
* Return: The converted number, or 0 if there is an invalid character
*         or b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

/* Input validation */
if (b == NULL)
return (0);

/* Iterate through the string */
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1') /* Check for invalid characters */
return (0);

result = (result * 2) + (b[i] - '0'); /* Binary to decimal conversion */
}

return (result);
}
