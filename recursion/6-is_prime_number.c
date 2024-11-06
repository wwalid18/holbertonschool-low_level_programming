#include "main.h"

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise 0.
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}

/**
 * check_prime - A helper function to check if a number is prime.
 * @n: The number to be checked.
 * @i: The divisor to check from 2 upwards.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}
