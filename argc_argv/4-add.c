#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector (array of command line arguments)
 *
 * Return: 0 on success, 1 if one of the numbers contains non-digit symbols
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
