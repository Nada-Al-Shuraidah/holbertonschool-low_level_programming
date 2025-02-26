#include "main.h"

/**
* rev_string - Reverses a string.
* @s: The string to be reversed.
*/
void rev_string(char *s)
{
int len = 0;
int i = 0;
int j;
char temp;

while (s[len] != '\0')
len++;

j = len - 1;

while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
