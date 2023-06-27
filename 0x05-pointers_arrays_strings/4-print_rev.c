#include "main.h"
/**
 * print_rev - function to display the spring in reverse order
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
