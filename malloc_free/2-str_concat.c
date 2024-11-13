#include "main.h"

/**
 * str_concat - duplicate a string
 * @s1 : The string to duplicate
 * @s2 :The string to duplicate
 * Return: A pointer to the duplicated string.
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int len1, len2, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
len2 = 0;
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
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
