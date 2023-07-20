#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: the characer that separates the numbers
 * @n: the number of strings passed
 * @...: Variable strings to print
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(num, char*));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}

