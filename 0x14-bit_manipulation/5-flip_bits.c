#include "main.h"

/**
 * flip_bits - function to counts the number of bits to change for a flip
 * @n: first number
 * @m: second number
 *
 * Description: function to counts the number of bits to change for a flip
 * Return: the number of bits to be change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num_bits = 0;
	unsigned long int new;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = ex >> i;
		if (new & 1)
			num_bits++;
	}

	return (num_bits);
}

