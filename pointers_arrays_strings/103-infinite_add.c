#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer to store the result
* @size_r: buffer size
*
* Return: pointer to the result, or 0 if result cannot be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, i, j, k;

while (n1[len1])
len1++;
while (n2[len2])
len2++;

if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);

i = len1 - 1;
j = len2 - 1;
k = 0;

while (i >= 0 || j >= 0 || carry)
{
int sum = carry;

if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';

carry = sum / 10;
r[k++] = (sum % 10) + '0';
}

if (k >= size_r)
return (0);

r[k] = '\0';

for (i = 0, j = k - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}

return (r);
}
