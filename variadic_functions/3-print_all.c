#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
print_func key[4] = {
{print_char, 'c'},
{print_int, 'i'},
{print_float, 'f'},
{print_string, 's'}
};
const char *ptr = format;
va_list args;
int keyind = 0, notfirst = 0;
va_start(args, format);
while (format && *ptr)
{
if (key[keyind].spec == *ptr)
{
if (notfirst)
printf(", ");
notfirst = 1;
key[keyind].print(args);
ptr++;
keyind = -1;
}
keyind++;
ptr += keyind / 4;
keyind %= 4;
}
printf("\n");
va_end(args);
}
/**
 * print_char - Function to print a character.
 * @args: A list of types of arguments passed to the function.
 */
void print_char(va_list args)
{
char c = va_arg(args, int);
printf("%c", c);
}
/**
 * print_int - Function to print an integer.
 * @args: A list of types of arguments passed to the function.
 */
void print_int(va_list args)
{
int num = va_arg(args, int);
printf("%d", num);
}
/**
 * print_float - Function to print a float.
 * @args: A list of types of arguments passed to the function.
 */
void print_float(va_list args)
{
float f = va_arg(args, double);
printf("%f", f);
}
/**
 * print_string - Function to print a string.
 * @args: A list of types of arguments passed to the function.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char*);
while (str != NULL)
{
printf("%s", str);
return;
}
printf("(nil)");
}
