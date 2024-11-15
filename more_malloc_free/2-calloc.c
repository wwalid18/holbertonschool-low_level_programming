#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory set to zero,
 *         or NULL if nmemb or size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = calloc(nmemb, size);
return (ptr);
}
