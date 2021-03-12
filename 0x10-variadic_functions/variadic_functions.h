#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct format - structure of our function pointer and paramters
 * @form: format parameter
 * @f: function pointer
 */

typedef struct format
{
	char *form;
	void (*f)();
} form_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
