#include "main.h"
/**
 * puts2 - function to print one character in two characters
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	int length = 0;
	int g = 0;
	char *z = str;
	int k;

	while (*z != '\0')
	{
		z++;
		length++;
	}
	g = length - 1;
	for (k = 0 ; k <= g ; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}

