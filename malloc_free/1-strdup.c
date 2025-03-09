#include "main.h"
#include <stdlib.h>

/**
* _strdup - Returns a pointer to a newly allocated space in memory
*           which contains a copy of the string given as a parameter.
* @str: The original string to be duplicated.
*
* Return: A pointer to the duplicated string, or NULL if insufficient
*         memory was available or if str is NULL.
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, length;

/* Check if the string is NULL */
if (str == NULL)
return (NULL);

/* Calculate the length of the original string */
for (length = 0; str[length] != '\0'; length++)
;

/* Allocate memory for the duplicated string */
duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);

/* Copy the original string to the duplicated string */
for (i = 0; i < length; i++)
duplicate[i] = str[i];

/* Add the NULL terminator */
duplicate[length] = '\0';

return (duplicate);
}
