#include "main.h"

/**
* print_large_number - Prints a large number.
* @num: The number to print.
* @size: The size of the number.
*/
void print_large_number(unsigned int *num, int size)
{
int i;

for (i = size - 1; i >= 0; i--)
{
_putchar(num[i] + '0');
}
}

/**
* fibonacci_calculation - Calculates the next Fibonacci number.
* @fib: Array of two Fibonacci numbers.
* @fib_size: Array of sizes of the two Fibonacci numbers.
* @fib_next: Array to store the next Fibonacci number.
* @fib_next_size: Pointer to store the size of the next Fibonacci number.
*/
void fibonacci_calculation(unsigned int fib[][20], int fib_size[],
unsigned int fib_next[], int *fib_next_size)
{
unsigned int carry = 0;
int j;

*fib_next_size = 0;
for (j = 0; j < fib_size[0]; j++)
{
fib_next[j] = fib[0][j] + fib[1][j] + carry;
carry = fib_next[j] / 10;
fib_next[j] %= 10;
if (fib_next[j] != 0 || *fib_next_size != 0)
{
*fib_next_size = j + 1;
}
}
if (carry != 0)
{
fib_next[j] = carry;
*fib_next_size = j + 1;
}
}

/**
* fibonacci_update - Updates the Fibonacci numbers.
* @fib: Array of two Fibonacci numbers.
* @fib_size: Array of sizes of the two Fibonacci numbers.
* @fib_next: Array storing the next Fibonacci number.
* @fib_next_size: Size of the next Fibonacci number.
*/
void fibonacci_update(unsigned int fib[][20], int fib_size[],
unsigned int fib_next[], int fib_next_size)
{
int k;

for (k = 0; k < 20; k++)
{
fib[0][k] = fib[1][k];
fib[1][k] = fib_next[k];
}
fib_size[0] = fib_size[1];
fib_size[1] = fib_next_size;
}

/**
* main - Prints the first 98 Fibonacci numbers.
*
* Return: Always 0 (success).
*/
int main(void)
{
unsigned int fib[2][20] = {{0}}, fib_next[20] = {0};
int fib_size[2] = {1}, fib_next_size = 1;
int i;

fib[0][0] = 1;
fib[1][0] = 2;

print_large_number(fib[0], fib_size[0]);
_putchar(',');
_putchar(' ');
print_large_number(fib[1], fib_size[1]);

for (i = 2; i < 98; i++)
{
fibonacci_calculation(fib, fib_size, fib_next, &fib_next_size);

_putchar(',');
_putchar(' ');
print_large_number(fib_next, fib_next_size);

fibonacci_update(fib, fib_size, fib_next, fib_next_size);
}

_putchar('\n');
return (0);
}
