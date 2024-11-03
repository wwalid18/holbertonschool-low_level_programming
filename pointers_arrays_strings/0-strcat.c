#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src is appended.
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
