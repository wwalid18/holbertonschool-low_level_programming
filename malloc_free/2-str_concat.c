#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated string containing
 *         the contents of s1 followed by the contents of s2,
 *         or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int len1, len2, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
concat_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (concat_str == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
concat_str[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
concat_str[i + j] = s2[j];
}
concat_str[i + j] = '\0';
return (concat_str);
}
