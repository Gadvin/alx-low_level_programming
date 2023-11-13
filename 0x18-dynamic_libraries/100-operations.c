#include <stdio.h>

/**
 * add - function to add 2 numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of the numbers
 * Description - Function to add 2 numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function to subtract 2 numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of the numbers
 * Description - Function to subtract 2 numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function to multiply 2 numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of the numbers
 * Description - Function to multiply 2 numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function to add 2 numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of the numbers
 * Description - Function to divide 2 numbers
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}

/**
 * mod - function to find modulus of 2 numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of the numbers
 * Description - Function to modulus 2 numbers
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
}
