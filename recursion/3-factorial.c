#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which the factorial is calculated.
 *
 * Return: The factorial of the number.
 *         If n is lower than 0, returns -1 to indicate an error.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
