#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
