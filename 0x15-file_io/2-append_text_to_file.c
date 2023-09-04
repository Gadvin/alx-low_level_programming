#include "main.h"

/**
 * append_text_to_file - function to append text at the end
 * @filename: address to the name of the file created
 * @text_content: Address to string
 *
 * Description: function to append text at the end
 * Return: 1 for success and -1 for fails
 */

int append_text_to_file(const char *filename, char *text_content)
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

	file = open(filename, O_WRONLY | O_APPEND);

	wr = write(file, text_content, length);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);
}
