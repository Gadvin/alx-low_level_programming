#include "main.h"

/**
 * get_endianness - function to check if a machine is little or big endian
 *
 * Description: function to check if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int g = 1;

	char *f = (char *) &g;

	return (*f);
}
