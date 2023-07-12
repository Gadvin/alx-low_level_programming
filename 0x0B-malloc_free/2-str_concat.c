#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concanate 2 strings
 * @s1: String 1
 * @s2: String 2
 * Description: Function to concanate 2 strings
 * Return: 0 when no strings are passed
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len1, len2, totalLen;
	
	i = 0;
	while (s1[i] != '\0')
	{
		len1++;
	}
	
	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
	}

	totalLen = len1 + len2;
	concat = malloc(sizeof(char) * (totalLen + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	i = len1 = len2 =  0;

	while (s1[len1] != '\0')
	{
		concat[i] = s1[len1];
		i++;
		len1++;
	}

	while (s2[len2] != '\0')
	{
		concat[i] = s2[len2];
		i++;
		len2++;
	}

	concat[i] = '\0';

	return (concat);
}
