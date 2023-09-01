#include "main.h"

/**
 * clear_bit - function to set the vlue of a given bit to 0
 * @n: the pointer to the number to be changed
 * @index: the index of the bit to set to 0
 *
 * Description: function to set the vlue of a given bit to 0
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
