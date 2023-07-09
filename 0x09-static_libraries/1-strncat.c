#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * using at most n bytes from src
 * @dest: input string 1
 * @src: input string 2
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int g = 0;
	int k = 0;

	while (dest[g] != '\0')
	{
		g++;
	}

	while (k < n && src[k] != '\0')
	{
	dest[g] = src[k];
	g++;
	k++;
	}
	dest[g] = '\0';
	return (dest);
}

