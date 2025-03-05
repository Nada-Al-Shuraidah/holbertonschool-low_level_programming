#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0 (success), 1 (error)
*/
int main(int argc, char *argv[])
{
int i, j, num, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
sum += num;
}

printf("%d\n", sum);
return (0);
}
