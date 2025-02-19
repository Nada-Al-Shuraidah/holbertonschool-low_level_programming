#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, next, sum = 0;

while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
sum += fib2;
}

next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}

printf("%lu\n", sum);
return (0);
}
