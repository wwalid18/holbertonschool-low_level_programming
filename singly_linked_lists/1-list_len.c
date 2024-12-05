#include "lists.h"

/**
 * list_len - Returns the number of elements in lists ig.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
