#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current;
char *str2;
unsigned int len2 = 0;
str2 = strdup(str);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = str2;
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
while (str[len2])
len2++;
new_node->len = len2;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new_node;
return (new_node);
}
