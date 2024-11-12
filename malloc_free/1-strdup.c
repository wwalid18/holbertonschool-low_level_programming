#include <stdlib.h>
#include <string.h>
#include <cstddef>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient
 *         memory was available or str is NULL.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int len, i;
if (str == NULL)
return (NULL);
len = strlen(str);
duplicate = (char *)malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
duplicate[i] = str[i];
}
duplicate[len] = '\0';
return (duplicate);
}
