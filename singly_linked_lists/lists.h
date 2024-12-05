#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>


/**
 * struct list_s - Singly linked list
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Node structure for singly linked list.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
