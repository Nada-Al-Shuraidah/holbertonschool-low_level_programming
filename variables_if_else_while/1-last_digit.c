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
int last_digit = n % 10;

if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
return (0);
}
