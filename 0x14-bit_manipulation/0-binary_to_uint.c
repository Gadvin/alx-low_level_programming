#include "main.h"

/**
 * binary_to_uint - function to convert a binary to unsigned int
 * @b: the binary number
 *
 * Description: function to convert a binary to unsigned int
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_num = 2 * decimal_num + (b[i] - '0');
	}

	return (decimal_num);
}
