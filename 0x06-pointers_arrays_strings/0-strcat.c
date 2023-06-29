#include "main.h"
/**
 * _strcat - function to concatenates two strings
 * @dest: input string 1
 * @src: input string 2
 * Return: combined string
 */

char *_strcat(char *dest, char *src)
{
	int g = 0;
	int k = 0;

	while (dest[g] != '\0')
	{
		g++;
	}

	while (src[k] != '\0')
	{
		dest[g] = src[k];
		g++;
		k++;
	}

	dest[g] = '\0';
	return (dest);
}
