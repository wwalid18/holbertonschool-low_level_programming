#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long f1 = 1, f2 = 2;
unsigned long next;
for (i = 1; i <= 50; i++)
{
if (i == 1)
{
printf("%lu", f1);
}
else if (i == 2)
{
printf(", %lu", f2);
}
else
{
next = f1 + f2;
printf(", %lu", next);
f1 = f2;
f2 = next;
}
}
printf("\n");
return (0);
}
