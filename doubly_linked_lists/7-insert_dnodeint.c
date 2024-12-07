#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be inserted, starting at 0.
 * @n: Data for the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *node = *h;
unsigned int i = 0;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (node != NULL && i < idx - 1)
	{
		node = node->next;
		i++;
	}
	if (node == NULL || (node->next == NULL && i < idx - 1))
		return (NULL);
	if (node->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = node->next;
	new->prev = node;
	if (node->next != NULL)
		node->next->prev = new;
	node->next = new;
	return (new);
}
