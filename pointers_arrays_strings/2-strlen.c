#include "main.h"

/**
* _strlen - Returns the length of a string
* @s: The string to calculate the length of
* 
* Return: The length of the string
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')  /* Iterate until the null terminator */
{
length++;  /* Increment length for each character */
s++;       /* Move to the next character */
}

return length;  /* Return the total length */
}
