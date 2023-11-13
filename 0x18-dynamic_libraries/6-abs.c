#include "main.h"

/**
 * _abs - to print out the absolute value
 * @g: number to make Absolute
 * Return: Absolute value of a value
 * Return 0 as default value
 */

int _abs(int g)
{
	if (g >= 0)
	{
		return (g);
	}
	else
	{
		return (-1 * g);
	}
	return (0);
}
