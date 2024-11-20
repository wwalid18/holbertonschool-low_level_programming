#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct print_func - a key for picking functions to use for printing
 * in 3-print_all.c
 *
 * @print: function to use for printing
 * @spec: character specifier
 */
typedef struct print_func
{
void (*print)(va_list args);
char spec;
} print_func;


void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);

#endif
