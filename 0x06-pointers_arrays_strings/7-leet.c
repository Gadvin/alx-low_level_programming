#include "main.h"
/**
 * leet - function to encode  into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == string1[j])
			{
				n[i] = string2[j];
			}
		}
	}
	return (n);
}

