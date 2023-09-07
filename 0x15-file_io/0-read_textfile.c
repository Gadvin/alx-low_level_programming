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
	ssize_t fp;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytesRead = read(fp, buffer, letters);


	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fp);

	return (bytesWritten);
}
