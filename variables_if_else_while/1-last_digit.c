#include <stdlib.h>
#include <time.h>
#include <stdio.h> /* included stdio.h for printf */

/**
 * main - Entry point of the program
 *
 * Description: This program will assign a random number to the variable n
 * each time it is executed. It then checks the last digit of the number and
 * prints whether it is greater than 5, 0, or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum = n % 10;

if (lastnum > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
}
else if (lastnum == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastnum);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
}
return (0);
}
