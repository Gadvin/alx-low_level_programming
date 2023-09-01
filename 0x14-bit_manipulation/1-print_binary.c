#include "main.h"

/**
 * print_binary - function to convert binary to decimal number
 * @n: number to be converted
 *
 * Description: function to convert binary to decimal number
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int j;

	for (i = 63; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

