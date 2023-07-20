#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to add arguments
 * @n: number of arguments to be added
 * @...: A variable number of parameters
 *
 * description: funtion to add numbers
 * Return: sum of the numbers
 **/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	else
	{
	unsigned int i, sumation = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sumation += va_arg(args, int);
	}

	va_end(args);
	return (sumation);
	}
}
