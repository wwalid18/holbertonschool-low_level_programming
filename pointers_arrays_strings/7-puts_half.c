#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 */

void puts_half(char *str)
{
int i;
int length = 0;
int start_index;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2 + 1;
}
for (i = start_index; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
