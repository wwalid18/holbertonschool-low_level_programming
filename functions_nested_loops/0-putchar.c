#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char msg[] = "_putchar\n";
write(1, msg, sizeof(msg) - 1);
return (0);
}
