#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int i;
unsigned long int a1 = 1, a2 = 2, b1;
unsigned long int a1_high, a1_low, a2_high, a2_low;
unsigned long int high, low;

printf("%lu, %lu", a1, a2);

for (i = 2; i < 98; i++)
{
if (i < 91)
{
b1 = a1 + a2;
a1 = a2;
a2 = b1;
printf(", %lu", b1);
}
else
{
a1_high = a1 / 1000000000;
a1_low = a1 % 1000000000;
a2_high = a2 / 1000000000;
a2_low = a2 % 1000000000;

high = a1_high + a2_high;
low = a1_low + a2_low;

if (low > 999999999)
{
high += 1;
low %= 1000000000;
}

printf(", %lu%09lu", high, low);

a1 = a2;
a2 = high * 1000000000 + low;
}
}
printf("\n");
return (0);
}
