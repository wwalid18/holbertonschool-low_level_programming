#include "main.h"

/**
 * swap_int - swaps the value of two ints
 * @a: the first int
 * @b: the secand int
 */

void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
