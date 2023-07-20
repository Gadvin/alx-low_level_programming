#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: the characer that separates the numbers
 * @n: the number of numbers passed
 * @...: Varible numbers to print
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int g, i = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		g = va_arg(num, int);
		printf("%d", g);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}

