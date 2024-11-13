#include "main.h"
/**
 * _strdup - duplicate a string
 * @str: The string to duplicate
 * Return: A pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int len, i;

if (str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}

duplicate = (char *)malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
duplicate[i] = str[i];
}
duplicate[len] = '\0';
return (duplicate);
}
