#include <stdio.h>

int main(void) 
{
char *str = "holberton";
int spaces = 0;

while (*str)
{
for (int i = 0; i < spaces; i++)
{
putchar(' ');
}
putchar(*str);
putchar('\n');

spaces++;
str++;
}

return 0;
}
