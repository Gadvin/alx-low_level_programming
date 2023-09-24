#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int openSourceFile(const char *file_from);
int openDestFile(const char *file_to);

/**
 * openSourceFile - Function to open the source file for reading
 * @file_from: file to be opened
 *
 * Description: Function to open the source file for reading
 * Return: Open file
 */
int openSourceFile(const char *file_from)
{
	int fd_source = open(file_from, O_RDONLY);

	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return (fd_source);
}

/**
 * openDestFile - Function to open or create the destination file for writing
 * @file_to: file to be opened
 *
 * Description: Function to open the source file for reading
 * Return: Open file
 */
int openDestFile(const char *file_to)
{
	int fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (fd_dest);
}

/**
 * main - Function copy one file to another
 * @argc: arguments passed to the code
 * @argv: arguments used for this function
 *
 * Description: function to copy one file to another
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_source, fd_dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Open the source file for reading*/
	fd_source = openSourceFile(file_from);
	fd_dest = openDestFile(file_to);

	/* Copy data from source to destination*/
	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}
