#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
int i = 0;
int started = 0;
while (s[i] != '\0')
{
if (s[i] == ' ')
{
i++;
continue;
}
if (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign *= -1;
i++;
continue;
}
if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
num = (num * 10) + (s[i] - '0');
i++;
continue;
}
if (started)
break;
i++;
}
if (!started)
return (0);
return (sign *num);
}
