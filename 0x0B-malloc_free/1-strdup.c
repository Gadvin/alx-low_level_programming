#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function to duplicate a string
 * to new memory space location
 * @str: char
 * Description: function to duplicate a string
 * to new memory space location
 * Return: 0 on failure
 */

char *_strdup(char *str)
{
	char *newstr;
	int i = 0, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	newstr = malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		newstr[r] = str[r];
	}

	return (newstr);
}

