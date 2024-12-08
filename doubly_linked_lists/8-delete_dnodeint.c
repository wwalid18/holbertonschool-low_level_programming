#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index in a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete, starting at 0.
 *
 * Return: 1 if successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
if (*head == NULL)
	return (-1);
if (index == 0)
{
	*head = temp->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(temp);
	return (1);
}
while (index > 0 && temp != NULL)
{
	temp = temp->next;
	index--;
}
if (temp == NULL)
	return (-1);
if (temp->next != NULL)
	temp->next->prev = temp->prev;
if (temp->prev != NULL)
	temp->prev->next = temp->next;
free(temp);
return (1);
}
