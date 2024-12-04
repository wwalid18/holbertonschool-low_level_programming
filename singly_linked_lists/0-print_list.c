#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t x = 0;
char digits[10];
int j = 0, i = 0;
unsigned int number = h->len;

while (h != NULL)
{
	if (h->str == NULL)
		write(1, "[0] (nil)", 10);
	else
	{
		_putchar('[');

		while (number > 0)
		{
			digits[i++] = (number % 10) + '0';
			number /= 10;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(digits[j]);
		}
		write(1, "] ", 2);
		for (i = 0; h->str[i] != '\0'; i++)
		{
			_putchar(h->str[i]);
		}
		_putchar('\n');
	}
	h = h->next;
	x++;
}
return (x);
}
