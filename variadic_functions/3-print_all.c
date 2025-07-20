#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print char
 * @args: argument to print
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
* print_int - print int
* @args: argument to print
*/
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - print float
 * @args: argument to print
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - print string
 * @args: argument to print
 */
void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (str == NULL)
		printf("(nil)");

printf("%s", str);
}

/**
 * print_all - print all arguments
 * @format: list of all arguments
 */
void print_all(const char * const format, ...)
{
	op_t ops[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string}
	};

	va_list list;
	int i = 0;
	int j = 0;
	int match;
	char *separator = "";

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		match = 0;
		while (j < 4)
		{
			if (ops[j].type == format[i] && match == 0)
			{
				printf("%s", separator);
				ops[j].f(&list);
				separator = ", ";
				match = 1;
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(list);
	printf("\n");
}
