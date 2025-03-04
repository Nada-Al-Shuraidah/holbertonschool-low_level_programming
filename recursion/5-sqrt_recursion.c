#include "main.h"

/**
* _sqrt_recursion_helper - helper function for _sqrt_recursion
* @n: the number to calculate the square root of
* @guess: the current guess for the square root
*
* Return: the natural square root of n, or -1 if n does not have one
*/
int _sqrt_recursion_helper(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}

return (_sqrt_recursion_helper(n, guess + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to calculate the square root of
*
* Return: the natural square root of n, or -1 if n does not have one
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}

return (_sqrt_recursion_helper(n, 1));
}
