#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The size of the array.
 * @cmp: A pointer to the function used to compare elements.
 *
 * Return: The index of the first element for which cmp does not return 0.
 *         If no element matches, returns -1.
 *         If size <= 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
