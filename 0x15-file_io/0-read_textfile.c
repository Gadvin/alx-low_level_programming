#include "main.h"

/**
 * read_textfile - function to read a txt file
 * @filename: file to be read
 * @letters: number of letters read
 *
 * Description - function to read a txt file
 * Return: actual letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	size_t bytesRead;
	size_t bytesWritten;

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytesRead = fread(buffer, sizeof(char), letters, fp);

	if (bytesRead == 0)
	{
		fclose(fp);
		return (0);
	}

	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	free(buffer);
	fclose(fp);

	return (bytesWritten);
}
