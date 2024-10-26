#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long f1 = 1;
unsigned long f2 = 2;
unsigned long next;
int count;
printf("%lu, %lu", f1, f2);
for (count = 3; count <= 98; count++)
{
next = f1 + f2;
printf(", %lu", next);
f1 = f2;
f2 = next;
}
printf("\n");
return (0);
}
