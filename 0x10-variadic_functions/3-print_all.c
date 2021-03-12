#include "variadic_functions.h"

/**
 *
 *
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 *
 *
 */

void print_integer(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 *
 *
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 *
 *
 */

void print_string(va_list s)
{
	char *string = va_arg(s, char *);
	if (string == NULL)
	{
		string = "(nil)";
	}

	printf("%s", string);
}

/**
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list aprm;

	unsigned int i = 0;
	unsigned int j = 0;

	form_t form[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start (aprm, format);

	while (format && format[i])
	{
		while (j < 4)
		{
			if (format[i] == *form[j].form)
			{
				form[j].f(aprm);
				printf(", ");
			}
			j++;
		}
		i++;
	}

	printf("\n");
}
