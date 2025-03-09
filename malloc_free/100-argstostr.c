#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of the program.
* @ac: The number of arguments.
* @av: An array of strings representing the arguments.
*
* Return: A pointer to a new string, or NULL if it fails.
*         Returns NULL if ac == 0 or av == NULL.
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, length = 0;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the new string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
length++;
length++;  /* For the newline character */
}

/* Allocate memory for the new string */
str = malloc((length + 1) * sizeof(char));
if (str == NULL)
return (NULL);

/* Concatenate the arguments into the new string */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
str[k] = av[i][j];
str[k] = '\n';
k++;
}
str[k] = '\0';

return (str);
}
