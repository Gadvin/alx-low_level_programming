#include "shell.h"

/**
 * r_command - Function to read a command from the input
 * @command: the command to read
 * @size: the size of the command
 *
 * Return: NULL
 */

void r_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			g_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			g_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}

