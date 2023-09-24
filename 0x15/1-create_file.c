#include "main.h"

/**
 * create_file - function to create a file
 * @filename: address to the name of the file created
 * @text_content: Address to string
 *
 * Description: function to create a file
 * Return: 1 for success and -1 for fails
 */

int create_file(const char *filename, char *text_content)
{
	int file = 0;
	int wr = 0;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wr = write(file, text_content, length);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);
}
