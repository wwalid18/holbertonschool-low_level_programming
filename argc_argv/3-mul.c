#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector (array of command line arguments)
 * Return: 0 on success,
 * 1 if the program does not receive exactly two arguments
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
