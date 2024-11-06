#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be calculated.
 *
 * Return: The natural square root of the number, or -1 if it doesn't exist.
 */
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - A helper function to calculate the square root recursively.
 * @n: The number whose square root is to be calculated.
 * @i: The current number being checked as a potential square root.
 *
 * Return: The square root of the number,
 * or -1 if no natural square root exists.
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_helper(n, i + 1));
}
