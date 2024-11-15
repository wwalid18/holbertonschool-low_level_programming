#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: Pointer to the newly created array.
 *         If min > max, return NULL.
 *         If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
int *array;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++, min++)
array[i] = min;
return (array);
}
