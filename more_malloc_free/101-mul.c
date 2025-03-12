#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int is_number(char *str);
void print_error(void);
char *multiply(char *num1, char *num2);

/**
* main - Entry point. Multiplies two positive numbers.
* @argc: Number of arguments.
* @argv: Array of arguments.
*
* Return: 0 on success, 98 on failure.
*/
int main(int argc, char *argv[])
{
char *result;

if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
{
print_error();
}

result = multiply(argv[1], argv[2]);
if (!result)
{
print_error();
}

printf("%s\n", result);
free(result);

return (0);
}

/**
* is_number - Checks if a string is a number.
* @str: The string to check.
*
* Return: 1 if the string is a number, 0 otherwise.
*/
int is_number(char *str)
{
while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
}
return (1);
}

/**
* print_error - Prints "Error" and exits with a status of 98.
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
*
* Return: The result of the multiplication.
*/
char *multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, total_len, i, j, carry, num1_digit, num2_digit, sum;
char *result;

while (num1[len1])
len1++;
while (num2[len2])
len2++;

total_len = len1 + len2;
result = malloc(total_len + 1);
if (!result)
return (NULL);

for (i = 0; i <= total_len; i++)
result[i] = '0';
result[total_len] = '\0';

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
num1_digit = num1[i] - '0';

for (j = len2 - 1; j >= 0; j--)
{
num2_digit = num2[j] - '0';
sum = (result[i + j + 1] - '0') + (num1_digit *num2_digit) +carry;
carry = sum / 10;
result[i + j + 1] = (sum % 10) + '0';
}
result[i + j + 1] += carry;
}

while (*result == '0' && *(result + 1))
result++;

return (result);
}
