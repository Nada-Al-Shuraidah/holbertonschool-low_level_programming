#include <stdio.h>

//Include a text manipulation library to use the function strlen
#include <string.h>

int main()
{
//Define a pointer to a text and set its value "holberton"
char *hol = "holberton";

//Count the length of the text and store it in a variable len
int len = strlen(hol);

int i, j;

for (i = 0; i< len; i++)
{
for (j = 0; j < i; j++)
if (i != 0)
putchar(' ');
putchar(hol[i]); //Print the current character of the text
putchar('\n');
}

return 0;
}
