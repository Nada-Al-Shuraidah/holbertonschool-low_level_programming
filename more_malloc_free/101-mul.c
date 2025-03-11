#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (putchar(c));
}

/**
* is_digit - Checks if a string contains only digits.
* @s: The string to check.
*
* Return: 1 if all digits, 0 otherwise.
*/
int is_digit(char *s)
{
while (*s)
{
if (!isdigit(*s))
return (0);
s++;
}
return (1);
}

/**
* print_error - Prints an error message and exits.
*/
void print_error(void)
{
printf("Error\n");
exit(98);
}

/**
* multiply - Multiplies two positive numbers.
* @num1: The first number.
* @num2: The second number.
*/
void multiply(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int *result = calloc(len1 + len2, sizeof(int));
int i, j, k;

if (result == NULL)
print_error();

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int digit1 = num1[i] - '0';
int digit2 = num2[j] - '0';
result[i + j + 1] += digit1 * digit2;
}
}

for (k = len1 + len2 - 1; k > 0; k--)
{
result[k - 1] += result[k] / 10;
result[k] %= 10;
}

i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;

if (i == len1 + len2)
_putchar('0');
else
{
for (; i < len1 + len2; i++)
_putchar(result[i] + '0');
}

_putchar('\n');
free(result);
}

/**
* main - Multiplies two positive numbers.
* @argc: The number of arguments.
* @argv: The arguments.
*
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
print_error();

multiply(argv[1], argv[2]);
return (0);
}
