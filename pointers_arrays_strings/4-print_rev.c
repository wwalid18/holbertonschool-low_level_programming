#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 */

void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (length -= 1; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n');
}
