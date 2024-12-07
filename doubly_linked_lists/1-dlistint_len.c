#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in lists ig.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;

while (h != NULL)
{
	h = h->next;
	i++;
}
return (i);
}
