#include <stdio.h>

/**
* main - Finds and prints the largest prime factor of 612852475143
*
* Return: Always 0 (Success)
*/
int main(void)
{
long n = 612852475143;
long factor = 2; /* Start with the smallest prime number */

while (n % 2 == 0) /* Remove factors of 2 */
n /= 2;

for (factor = 3; factor * factor <= n; factor += 2) /* Check odd numbers */
{
while (n % factor == 0) /* Remove factor */
n /= factor;
}

if (n > 2) /* If any prime factor remains, it's the largest */
factor = n;

printf("%ld\n", factor);
return (0);
}
