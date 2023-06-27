#include "main.h"

/**
 *swap_int - function to swap a with b
 *@a: integer to be swapped
 *@b: integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

