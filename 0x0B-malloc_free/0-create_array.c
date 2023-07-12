#include "main.h"
#include <stdlib.h>

/**
 *create_array - function to create an array of size
 *size and assingning it with char c
 * @size: Size of an array
 * @c: character to be assigned
 * Description: Create an array of size size and assign char c
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}

	return (p);
}
