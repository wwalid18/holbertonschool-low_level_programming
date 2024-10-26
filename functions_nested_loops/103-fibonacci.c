#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms
 * in the Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long f1 = 1;
unsigned long f2 = 2;
unsigned long next;
unsigned long s = 2;
while (1)
{
next = f1 + f2;
if (next > 4000000)
{
break;
}
if (next % 2 == 0)
{
s += next;
}
f1 = f2;
f2 = next;
}
printf("%lu\n", s);
return (0);
}
