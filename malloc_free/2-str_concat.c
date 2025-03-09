#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to a newly allocated space in memory which contains
* the contents of s1, followed by the contents of s2, and null terminated.
* Returns NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int i, j, len1 = 0, len2 = 0;

/* Treat NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate the lengths of s1 and s2 */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* Allocate memory for the concatenated string */
concat_str = malloc((len1 + len2 + 1) * sizeof(char));
if (concat_str == NULL)
return (NULL);

/* Copy s1 into the new string */
for (i = 0; i < len1; i++)
concat_str[i] = s1[i];

/* Copy s2 into the new string */
for (j = 0; j < len2; j++, i++)
concat_str[i] = s2[j];

/* Add null terminator */
concat_str[i] = '\0';

return (concat_str);
}
