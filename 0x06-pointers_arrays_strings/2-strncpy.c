#include "main.h"
/**
 * _strncpy - function to concatenate two strings
 * using at most n bytes from src
 * @dest: input string 1
 * @src: input string 2
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int g = 0;

	while (g < n && src[g] != '\0')
	{
		dest[g] = src[g];
		g++;
	}

	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}

	return (dest);
}

