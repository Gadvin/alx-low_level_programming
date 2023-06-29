#include "main.h"
/**
 * reverse_array - function to  reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int g;

	for (i = 0; i < n--; i++)
	{
		g = a[i];
		a[i] = a[n];
		a[n] = g;
	}
}

