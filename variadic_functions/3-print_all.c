#include "variadic_functions.h"

/**
 * print_all - Prints numbers.
 * @format: Format of arguments passed to the function.
 * Return: Prints the arguments entered.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *s;
char c;
int num;
float f;
va_start(args, format);
while (format && format[i])
{
if (i > 0)
printf(", ");
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
num = va_arg(args, int);
printf("%d", num);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
break;
default:
break;
}
i++;
}
va_end(args);
printf("\n");
}
