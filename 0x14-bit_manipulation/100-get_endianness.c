#include <stdio.h>
#include "main"

/**
 * get_endianness - function to check if a machine is little or big endian
 * @union: struct for i and c
 * Description: function to check if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	union
	{
		int i;
		char c[sizeof(int)];
	} check;

	check.i = 1;

	return ((check.c[0] == 1) ? 1 : 0);
}
