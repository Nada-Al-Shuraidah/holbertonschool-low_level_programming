#include "main.h"
#include <stdio.h>

/**
 * print_first_fibonacci - Prints the first 92 Fibonacci numbers.
 */
void print_first_fibonacci(void)
{
unsigned long a = 1, b = 2, temp;
int count;

printf("%lu, %lu", a, b);

for (count = 3; count <= 92; count++)
{
temp = a + b;
printf(", %lu", temp);
a = b;
b = temp;
}
printf(", ");
}

/**
 * print_large_fibonacci-Prints Fibonacci numbers beyond 92 using split digits.
 * @a_high: High part of first number
 * @a_low: Low part of first number
 * @b_high: High part of second number
 * @b_low: Low part of second number
 */
void print_large_fibonacci(
unsigned long a_high, unsigned long a_low,
unsigned long b_high, unsigned long b_low)
{
unsigned long temp_high, temp_low;
int count;

for (count = 93; count <= 98; count++)
{
temp_high = a_high + b_high;
temp_low = a_low + b_low;

if (temp_low >= 1000000000)
{
temp_high += 1;
temp_low -= 1000000000;
}

printf("%lu%09lu", temp_high, temp_low);
if (count != 98)
printf(", ");

a_high = b_high;
a_low = b_low;
b_high = temp_high;
b_low = temp_low;

}
printf("\n");
}

/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
unsigned long a_high, a_low, b_high, b_low;
unsigned long a = 1, b = 2;

print_first_fibonacci();

a_high = a / 1000000000;
a_low = a % 1000000000;
b_high = b / 1000000000;
b_low = b % 1000000000;

print_large_fibonacci(a_high, a_low, b_high, b_low);

return (0);
}
