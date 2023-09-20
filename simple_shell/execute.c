#include "shell.h"

/**
 * exe_command - function to execute the command passed to it
 * @command: command to execute
 *
 * Return: NULL
 */

void exe_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		g_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[128];
		int arg_count = 0;

		char *token = strtok((char *)command, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;

	execvp(args[0], args);

	g_print("Error executing command.\n");
	exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
