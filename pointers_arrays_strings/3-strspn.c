/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the bytes to be checked against
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, length = 0;
int found;
for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
length++;
found = 1;
break;
}
}
if (!found)
{
break;
}
}
return (length);
}
