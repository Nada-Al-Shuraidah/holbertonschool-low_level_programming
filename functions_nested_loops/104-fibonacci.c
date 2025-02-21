#include "main.h"
#include <stdio.h>

/**
 * print_large_fibonacci - Print large Fibonacci numbers correctly
 * @a_high: High part of first number
 * @a_low: Low part of first number
 * @b_high: High part of second number
 * @b_low: Low part of second number
 */
void print_large_fibonacci(unsigned long a_high, unsigned long a_low,
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
printf(", %lu%09lu", temp_high, temp_low);

a_high = b_high;
a_low = b_low;
b_high = temp_high;
b_low = temp_low;
}
}
/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2 .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long a = 1, b = 2, temp;
unsigned long a_high, a_low, b_high, b_low;
int count;

printf("%lu, %lu", a, b);

for (count = 3; count <= 92; count++)
{
temp = a + b;
printf(", %lu", temp);
a = b;
b = temp;
}

a_high = a / 1000000000;
a_low = a % 1000000000;
b_high = b / 1000000000;
b_low = b % 1000000000;

print_large_fibonacci(a_high, a_low, b_high, b_low);
printf("\n");
return (0);
}
