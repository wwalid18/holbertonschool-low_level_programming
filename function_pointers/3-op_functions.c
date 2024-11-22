#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * op_add - calc the sum of a and b.
 * @a: int 1.
 * @b: int 2.
 * Return: the add.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - calc the difference of a and b.
 * @a: int 1.
 * @b: int 2.
 * Return: the sub.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calc the product of a and b.
 * @a: int 1.
 * @b: int 2.
 * Return: the mul.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - calc the result of the division of a by b.
 * @a: int 1.
 * @b: int 2.
 * Return: the div.
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - calc the remainder of the division of a by b.
 * @a: int 1.
 * @b: int 2.
 * Return: the mod.
 */
int op_mod(int a, int b)
{
return (a % b);
}
