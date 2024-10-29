#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
