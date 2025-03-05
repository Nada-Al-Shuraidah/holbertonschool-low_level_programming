#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make change
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0 (success), 1 (error)
*/
int main(int argc, char *argv[])
{
int cents, coins = 0, i;
int coin_values[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5; i++)
{
while (cents >= coin_values[i])
{
cents -= coin_values[i];
coins++;
}
}

printf("%d\n", coins);
return (0);
}
