#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *str2;
unsigned int len2 = 0;
str2 = strdup(str);
new_node = malloc(sizeof(list_t));
new_node->str = str2;
if (str == NULL)
{
free(new_node);
return (NULL);
}
str2 = strdup(str);
while (str[len2])
len2++;
new_node->len = len2;
new_node->next = *head;
*head = new_node;
return (new_node);
}
