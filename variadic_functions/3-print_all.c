#include "variadic_functions.h"

typedef struct print_func
{
char specifier;
void (*print)(va_list args);
} print_func;

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_nil_string(void);

print_func print_funcs[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string}
};

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
int printed = 0;
va_start(args, format);
while (format && format[i])
{
j = 0;
while (j < sizeof(print_funcs) / sizeof(print_funcs[0]))
{
if (format[i] == print_funcs[j].specifier)
{
if (printed)
printf(", ");
print_funcs[j].print(args);
printed = 1;
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
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
char *str = va_arg(args, char *);
printf("%s", str);
}
/**
 * print_nil_string - Function to print "(nil)" for NULL strings.
 * @args: A list of types of arguments passed to the function.
 */
void print_nil_string(void)
{
printf("(nil)");
}
